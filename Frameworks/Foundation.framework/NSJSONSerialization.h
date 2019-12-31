/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSJSONSerialization : NSObject {
    void * reserved;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)isValidJSONObject:(id)arg1;
+ (long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)init;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_JSONObjectFromFHIRData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)hk_JSONObjectSecureCodingClasses;
+ (id)hk_stringForDisplayFromFHIRData:(id)arg1;
+ (id)hk_stringForDisplayFromFHIRJSONObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance

+ (id)JSONStringFromNSDictionary:(id)arg1 error:(id*)arg2;

@end
