/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKImageElement : IKViewElement {
    double  _aspectRatio;
    IKSrcSetRule * _bestRule;
    IKImageElement * _fallbackImageElement;
    unsigned long long  _imageType;
    NSURL * _resolvedURL;
    double  _srcHeight;
    double  _srcWidth;
    NSDictionary * _srcset;
    NSArray * _srcsetRules;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, retain) IKSrcSetRule *bestRule;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) IKImageElement *fallbackImageElement;
@property (nonatomic, readonly) long long fill;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, readonly, retain) NSURL *placeholderURL;
@property (nonatomic, readonly) unsigned long long position;
@property (nonatomic, readonly) long long reflect;
@property (nonatomic, retain) NSURL *resolvedURL;
@property (nonatomic, readonly, retain) NSDictionary *srcset;
@property (nonatomic, retain) NSArray *srcsetRules;
@property (nonatomic, readonly) TVImageProxy *tv_imageProxy;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tv_imageScaleToSize;
@property (nonatomic, readonly) long long tv_imageType;
@property (nonatomic, readonly) bool tv_isResource;
@property (nonatomic, readonly) UIImage *tv_resourceImage;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) bool vui_hasValidImage;
@property (nonatomic, readonly) double width;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (unsigned long long)_imageTypeForTagName:(id)arg1;
+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (void)_initCommon;
- (void)_parseSrcset:(id)arg1;
- (void)_resolveURL;
- (void)appDocumentDidMarkStylesDirty;
- (double)aspectRatio;
- (id)bestRule;
- (id)borderColor;
- (id)fallbackImageElement;
- (long long)fill;
- (double)height;
- (unsigned long long)imageType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)initWithOriginalElement:(id)arg1;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)placeholderURL;
- (unsigned long long)position;
- (long long)reflect;
- (id)resolvedURL;
- (void)setBestRule:(id)arg1;
- (void)setResolvedURL:(id)arg1;
- (void)setSrcsetRules:(id)arg1;
- (id)srcset;
- (id)srcsetRules;
- (id)url;
- (double)width;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_associatedViewElement;
- (id)tv_imageProxy;
- (id)tv_imageProxyWithLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })tv_imageScaleToSize;
- (long long)tv_imageType;
- (bool)tv_isResource;
- (id)tv_resourceImage;
- (id)tv_urlWithLayout:(id)arg1;
- (id)tv_urlWithSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2;
- (id)tv_urlWithSize:(struct CGSize { double x1; double x2; })arg1 focusSizeIncrease:(double)arg2 centerGrowth:(bool)arg3 cropCode:(id)arg4;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (long long)accessoryType;
- (id)artworkCatalog;
- (id)bestURL;
- (id)cachePath;
- (id)resourceImage;
- (bool)vui_hasValidImage;

@end
