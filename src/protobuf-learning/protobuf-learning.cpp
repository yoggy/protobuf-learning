#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

#include "payload.pb.h"
#if _DEBUG
	#pragma comment(lib, "libprotobufD.lib")
#else
	#pragma comment(lib, "libprotobuf.lib")
#endif

void test_polygon()
{
	TestPoint *p;
	TestPolygon src_polygon, dst_polygon;

	// serialize
	src_polygon.set_enable(true);

	p = src_polygon.add_pts();
	p->set_x(1);
	p->set_y(2);

	p = src_polygon.add_pts();
	p->set_x(3);
	p->set_y(4);

	std::string buf;
	src_polygon.SerializeToString(&buf);

	// deserialize
	dst_polygon.ParseFromString(buf);
	printf(
		"dst_polygon: enable=%s, pt.size=%d, pt[0]=(%d,%d), pt[1]=(%d,%d)\n",
		dst_polygon.enable() ? "true" : "false",
		dst_polygon.pts_size(),
		dst_polygon.pts(0).x(),
		dst_polygon.pts(0).y(),
		dst_polygon.pts(1).x(),
		dst_polygon.pts(1).y()
		);
}

void test_image() 
{
	TestImage src_image, dst_image;
	char *src_jpg;
	int jpg_size = 123456789;

	// serialize
	src_image.set_filename("hoge.jpg");

	src_jpg = (char *)malloc(jpg_size);
	src_image.set_jpeg(src_jpg, jpg_size);
	free(src_jpg);

	std::string buf;
	src_image.SerializeToString(&buf);

	// deserialize
	dst_image.ParseFromString(buf);

	std::string jpeg = dst_image.jpeg();
	printf("dst_image:filename=%s, jpeg_size=%d\n", dst_image.filename().c_str(), jpeg.length());
}

int main(int argc, char* argv[])
{
	test_polygon();
	test_image();
	
	return 0;
}

