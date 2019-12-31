/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBackdropEffectView : UIView <CABackdropLayerDelegate> {
    CABackdropLayer * _backdropLayer;
    double  _zoom;
}

@property (nonatomic, retain) CABackdropLayer *backdropLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double zoom;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)backdropLayer;
- (id)init;
- (void)setBackdropLayer:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setZoom:(double)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)zoom;

@end
