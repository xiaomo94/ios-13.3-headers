/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPresentationDisplay : NSObject <NSCopying> {
    ARDisplayDeviceConfig * _displayConfig;
    long long  _viewOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic, readonly) long long cameraCompositing;
@property (nonatomic, readonly, copy) ARDisplayDeviceConfig *displayConfig;
@property (nonatomic, readonly) long long displayLayout;
@property (getter=isHeld, nonatomic, readonly) bool held;
@property (getter=isMonoscopic, nonatomic, readonly) bool monoscopic;
@property (nonatomic, readonly) long long presentationMode;
@property (getter=isStereoscopic, nonatomic, readonly) bool stereoscopic;
@property (nonatomic) long long viewOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;
@property (getter=isWorn, nonatomic, readonly) bool worn;

- (void).cxx_destruct;
- (long long)cameraCompositing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayConfig;
- (long long)displayLayout;
- (id)initWithDisplayConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplay:(id)arg1;
- (bool)isHeld;
- (bool)isMonoscopic;
- (bool)isStereoscopic;
- (bool)isWorn;
- (long long)presentationMode;
- (void)setViewOrientation:(long long)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)viewOrientation;
- (struct CGSize { double x1; double x2; })viewSize;

@end
