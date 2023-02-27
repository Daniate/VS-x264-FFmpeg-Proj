// FFmpegProj001.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

extern "C" {
#include <libavcodec/avcodec.h>
}

using namespace std;

int main()
{
    AVCodec* codec = avcodec_find_encoder(AV_CODEC_ID_H264);
    if (codec) {
        cout << codec->long_name << endl;
    }
    else {
        cout << "Can't find H264 Encoder!!!" << endl;
    }

    return EXIT_SUCCESS;
}

