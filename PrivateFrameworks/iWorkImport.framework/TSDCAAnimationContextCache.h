/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAAnimationContextCache : NSObject <TSDCAAnimationContextCacheProtocol> {
    bool  _autoreverses;
    double  _beginTime;
    double  _duration;
    NSString * _fillMode;
    double  _repeatCount;
    double  _timeOffset;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, readonly) bool autoreverses;
@property (nonatomic, readonly) double beginTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *fillMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double repeatCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeOffset;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (double)animationPercentFromAnimationTime:(double)arg1;
- (bool)autoreverses;
- (double)beginTime;
- (double)duration;
- (id)fillMode;
- (id)initWithAnimation:(id)arg1;
- (double)percentAtTime:(double)arg1;
- (double)repeatCount;
- (bool)shouldUseInitialValueAtAnimationTime:(double)arg1;
- (double)timeOffset;
- (id)timingFunction;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (double)workingPercentFromAnimationTime:(double)arg1;

@end
