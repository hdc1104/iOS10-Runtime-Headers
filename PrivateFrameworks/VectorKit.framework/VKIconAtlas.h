/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPIconPack, VKObjectPool, NSMapTable;

@interface VKIconAtlas : NSObject  {
    VKPIconPack *_iconPack;
    VKObjectPool *_artworkPool;
    NSMapTable *_atlasToImages;
}


- (struct CGImage { }*)_createImageForIconInfo:(id)arg1 contentScale:(float)arg2;
- (struct CGImage { }*)_createImageForName:(id)arg1 contentScale:(float)arg2;
- (struct CGImage { }*)_createImageForStyleAttributeKey:(unsigned int)arg1 value:(int)arg2 contentScale:(float)arg3;
- (id)artworkForName:(id)arg1 style:(struct { int x1; struct _VGLColor { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct _VGLColor { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3[2]; struct _VGLColor { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; int x5; struct _VGLColor { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; int x7; int x8; float x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct CGSize { float x_11_1_1; float x_11_1_2; } x11; float x12; struct _VGLColor { float x_13_1_1; float x_13_1_2; float x_13_1_3; float x_13_1_4; } x13; float x14; float x15; float x16; unsigned int x17; }*)arg2 contentScale:(float)arg3 styleAttributes:(id)arg4;
- (id)initWithIconPack:(id)arg1;
- (void)dealloc;

@end
