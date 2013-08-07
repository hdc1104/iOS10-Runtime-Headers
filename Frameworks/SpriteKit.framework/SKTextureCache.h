/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureCache : NSObject  {
    unsigned int texId;
    int texInternalFormat;
    unsigned int texFormat;
    unsigned int texType;
    struct CGSize { 
        float width; 
        float height; 
    } size;
    struct CGSize { 
        float width; 
        float height; 
    } pixelSize;
    BOOL isLoaded;
    BOOL hasAlpha;
    BOOL isPOT;
    char *pixelData;
    unsigned int *alphaMap;
    struct CGSize { 
        float width; 
        float height; 
    } alphaMapSize;
    int state;
    int lock;
    struct CGImage { } *collisionMask;
}

@property unsigned int texId;
@property int texInternalFormat;
@property unsigned int texFormat;
@property unsigned int texType;
@property struct CGSize { float x1; float x2; } size;
@property struct CGSize { float x1; float x2; } pixelSize;
@property BOOL isLoaded;
@property BOOL hasAlpha;
@property BOOL isPOT;
@property char * pixelData;
@property unsigned int* alphaMap;
@property struct CGSize { float x1; float x2; } alphaMapSize;
@property int state;
@property(getter=getLock,readonly) int* lock;


- (void)setTexType:(unsigned int)arg1;
- (unsigned int)texType;
- (void)setTexFormat:(unsigned int)arg1;
- (unsigned int)texFormat;
- (void)setTexInternalFormat:(int)arg1;
- (int)texInternalFormat;
- (void)setAlphaMapSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })alphaMapSize;
- (void)setAlphaMap:(unsigned int*)arg1;
- (unsigned int*)alphaMap;
- (void)setPixelSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPixelData:(char *)arg1;
- (void)setHasAlpha:(BOOL)arg1;
- (void)setIsPOT:(BOOL)arg1;
- (BOOL)isPOT;
- (void)setIsLoaded:(BOOL)arg1;
- (void)setTexId:(unsigned int)arg1;
- (unsigned int)texId;
- (int*)getLock;
- (struct CGSize { float x1; float x2; })pixelSize;
- (BOOL)hasAlpha;
- (struct CGSize { float x1; float x2; })size;
- (char *)pixelData;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setState:(int)arg1;
- (int)state;
- (BOOL)isLoaded;

@end
