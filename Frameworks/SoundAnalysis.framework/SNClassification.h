/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNClassification : NSObject <SNConfidenceProvidingWritable> {
    double  _confidence;
    NSString * _identifier;
}

@property (nonatomic) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)_init;
- (double)confidence;
- (id)identifier;
- (id)init;
- (void)setConfidence:(double)arg1;
- (void)setIdentifier:(id)arg1;

@end
