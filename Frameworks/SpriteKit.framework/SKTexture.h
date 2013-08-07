/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSArray, CIFilter, NSString, SKTextureCache, SKTexture;

@interface SKTexture : NSObject <NSCopying, NSCoding> {
    BOOL _shouldGenerateMipmaps;
    BOOL _didGenerateMipmaps;
    BOOL _isPath;
    BOOL _isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textCoords;
    BOOL _disableAlpha;
    BOOL _isRotated;
    struct CGPoint { 
        float x; 
        float y; 
    } _cropScale;
    struct CGPoint { 
        float x; 
        float y; 
    } _cropOffset;
    int _alignment;
    int _rowLength;
    BOOL _isCompressed;
    int _compressedSize;
    unsigned int _compressedFormat;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    int _filteringMode;
    int _wrapMode;
    unsigned int _textureTarget;
    NSString *_originalAtlasName;
    NSString *_subTextureName;
    SKTextureCache *_textureCache;
    unsigned int *_alphaMap;
    struct CGSize { 
        float width; 
        float height; 
    } _alphaMapSize;
}

@property(readonly) NSString * imageNameOrPath;
@property int filteringMode;
@property BOOL usesMipmaps;
@property(readonly) struct CGSize { float x1; float x2; } pixelSize;
@property unsigned int textureTarget;
@property BOOL isRotated;
@property(readonly) BOOL useAlpha;
@property(readonly) BOOL hasAlpha;
@property BOOL disableAlpha;
@property(readonly) BOOL isRepeatable;
@property struct CGPoint { float x1; float x2; } cropScale;
@property struct CGPoint { float x1; float x2; } cropOffset;
@property(copy) NSString * originalAtlasName;
@property(copy) NSString * subTextureName;
@property int wrapMode;
@property(readonly) unsigned int* alphaMap;
@property(readonly) struct CGSize { float x1; float x2; } alphaMapSize;

+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { float x1; float x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(BOOL)arg4;
+ (id)compressedTextureWithData:(id)arg1;
+ (void)preloadTextures;
+ (void)deleteUnusedTextures;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void)addTextureToPreloadlist:(id)arg1;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)textureWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTexture:(id)arg2;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)_textureWithImageNamed:(id)arg1;
+ (void)updateTextures;

- (void)_savePngFromGLCache:(id)arg1;
- (id)imageNameOrPath;
- (struct CGImage { }*)_newTextureFromGLCache;
- (void)setSubTextureName:(id)arg1;
- (id)subTextureName;
- (void)setOriginalAtlasName:(id)arg1;
- (id)originalAtlasName;
- (void)setTextureTarget:(unsigned int)arg1;
- (void)setCropOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })cropOffset;
- (void)setIsRotated:(BOOL)arg1;
- (void)setCropScale:(struct CGPoint { float x1; float x2; })arg1;
- (int)glTextureId;
- (void)preload;
- (int)filteringMode;
- (int)wrapMode;
- (void)setWrapMode:(int)arg1;
- (BOOL)isRepeatable;
- (void)_loadOnTextureQueue;
- (void)setUsesMipmaps:(BOOL)arg1;
- (BOOL)usesMipmaps;
- (id)textureByApplyingCIFilter:(id)arg1;
- (BOOL)isInMemory;
- (BOOL)disableAlpha;
- (void)setDisableAlpha:(BOOL)arg1;
- (BOOL)useAlpha;
- (id)initWithImagePath:(id)arg1;
- (void)preloadWithCompletionHandler:(id)arg1;
- (void)setTextureDimension:(const struct CGSize { float x1; float x2; }*)arg1 withPixelSize:(const struct CGSize { float x1; float x2; }*)arg2;
- (struct CGImage { }*)alphaMask;
- (BOOL)alphaTestX:(float)arg1 y:(float)arg2;
- (void)generateAlphaMapOfSize:(struct CGSize { float x1; float x2; })arg1 fromImage:(struct CGImage { }*)arg2;
- (struct CGPoint { float x1; float x2; })cropScale;
- (id)initWithImageNamed:(id)arg1;
- (void)initTextureCacheWithImageData;
- (void)loadImageDataFromCGImage:(struct CGImage { }*)arg1 pointsSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)loadImageDataFromPVRGZData:(id)arg1;
- (void)loadImageData;
- (BOOL)loadImageDataFromPVRData:(id)arg1;
- (void)_ensureImageData;
- (id)imgName;
- (struct CGSize { float x1; float x2; })alphaMapSize;
- (unsigned int*)alphaMap;
- (void)setFilteringMode:(int)arg1;
- (struct CGSize { float x1; float x2; })pixelSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textureRect;
- (unsigned int)textureTarget;
- (BOOL)hasAlpha;
- (void)commonInit;
- (struct CGSize { float x1; float x2; })size;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)load;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isRotated;
- (void)unload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
