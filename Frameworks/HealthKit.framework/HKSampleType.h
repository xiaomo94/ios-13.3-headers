/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSampleType : HKObjectType

@property (nonatomic, readonly) bool isMaximumDurationRestricted;
@property (nonatomic, readonly) bool isMinimumDurationRestricted;
@property (nonatomic, readonly) double maximumAllowedDuration;
@property (nonatomic, readonly) double minimumAllowedDuration;

+ (id)medicalRecordTypes;

- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1;
- (double)_maximumAllowedDuration;
- (double)_minimumAllowedDuration;
- (bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3;
- (bool)isMaximumDurationRestricted;
- (bool)isMinimumDurationRestricted;
- (double)maximumAllowedDuration;
- (double)minimumAllowedDuration;

@end
