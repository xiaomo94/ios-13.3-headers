/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration <NSSecureCoding> {
    NSSet * _sampleQueryDescriptions;
}

@property (nonatomic, copy) NSSet *sampleQueryDescriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sampleQueryDescriptions;
- (void)setSampleQueryDescriptions:(id)arg1;

@end
