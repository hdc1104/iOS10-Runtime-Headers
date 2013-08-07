/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject  {
    NSMutableDictionary *_cache;
}

@property(retain) MFMessageFileWrapper * fileWrapper;

+ (unsigned int)precedenceLevel;

- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)persistentUniqueIdentifier;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;
- (id)mimePart;
- (BOOL)needsRedownload;
- (BOOL)hasBeenDownloaded;
- (unsigned int)approximateSize;
- (id)cachedValueForKey:(id)arg1;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setMimePart:(id)arg1;
- (id)initWithWrapper:(id)arg1;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)fileWrapper;
- (void)setFileWrapper:(id)arg1;
- (id)init;
- (BOOL)isPlaceholder;
- (void)dealloc;
- (id)description;
- (void)download;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isContentDownloadable;
- (id)unzippedContentType;
- (BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
- (BOOL)isContentOpenable;
- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
- (BOOL)isDisplayableInline;
- (id)contentType;
- (id)mimeType;
- (BOOL)isCalendarFile;
- (void)scaleImageToFit:(unsigned int)arg1;
- (unsigned int)imageScalingFlags;
- (void)setImageScalingFlags:(unsigned int)arg1;
- (id)mf_markupStringForComposition:(BOOL)arg1 prependBlankLine:(BOOL)arg2 imageScale:(unsigned int)arg3;
- (id)mf_markupURL;
- (struct CGSize { float x1; float x2; })mf_markupSizeForImageScale:(unsigned int)arg1;
- (BOOL)isPass;
- (id)pass;

@end
