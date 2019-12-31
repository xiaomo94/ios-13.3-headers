/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPresentationDescriptor : NSObject <NSCopying, NSSecureCoding> {
    long long  _HUDOption;
    unsigned long long  _colorPixelFormat;
    unsigned long long  _depthPixelFormat;
    void _depthRange;
    unsigned long long  _drawableCount;
    unsigned long long  _drawablePixelFormat;
    long long  _layout;
    long long  _multisampleCount;
    long long  _presentationWarp;
    NSArray * _supportedMultisampleCount;
}

@property (nonatomic) long long HUDOption;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) void depthRange;
@property (nonatomic) unsigned long long drawableCount;
@property (nonatomic) unsigned long long drawablePixelFormat;
@property (nonatomic) long long layout;
@property (nonatomic) long long multisampleCount;
@property (nonatomic) long long presentationWarp;
@property (nonatomic, readonly) NSArray *supportedMultisampleCount;
@property (nonatomic, readonly) void viewportDepthRange;
@property (nonatomic, readonly) void viewportDepthRangeNDC;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)HUDOption;
- (unsigned long long)colorPixelFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)depthPixelFormat;
- (void)depthRange;
- (unsigned long long)drawableCount;
- (unsigned long long)drawablePixelFormat;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescriptor:(id)arg1;
- (bool)isReverseZ;
- (long long)layout;
- (long long)multisampleCount;
- (long long)presentationWarp;
- (void)setColorPixelFormat:(unsigned long long)arg1;
- (void)setDepthPixelFormat:(unsigned long long)arg1;
- (void)setDepthRange;
- (void)setDrawableCount:(unsigned long long)arg1;
- (void)setDrawablePixelFormat:(unsigned long long)arg1;
- (void)setHUDOption:(long long)arg1;
- (void)setLayout:(long long)arg1;
- (void)setMultisampleCount:(long long)arg1;
- (void)setPresentationWarp:(long long)arg1;
- (id)supportedMultisampleCount;
- (void)viewportDepthRange;
- (void)viewportDepthRangeNDC;

@end
