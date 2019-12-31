/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWUBSemanticRenderingInput : NSObject {
    NSArray * _faceObservations;
    struct __CVBuffer { } * _lowResPersonMask;
    struct __CVBuffer { } * _skinMask;
}

@property (nonatomic, readonly) NSArray *faceObservations;
@property (nonatomic, readonly) struct __CVBuffer { }*lowResPersonMask;
@property (nonatomic, readonly) struct __CVBuffer { }*skinMask;

- (void)dealloc;
- (id)faceObservations;
- (id)initWithSkinMask:(struct __CVBuffer { }*)arg1 lowResPersonMask:(struct __CVBuffer { }*)arg2 faceObservations:(id)arg3;
- (struct __CVBuffer { }*)lowResPersonMask;
- (struct __CVBuffer { }*)skinMask;

@end
