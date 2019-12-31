/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostCAStallAggregation : NSObject <NSCopying> {
    NSDictionary * _executablePathToStallAggregation;
    SignpostCAProcessStallAggregation * _systemAggregation;
}

@property (nonatomic, readonly) NSDictionary *executablePathToStallAggregation;
@property (nonatomic, readonly) SignpostCAProcessStallAggregation *systemAggregation;

- (void).cxx_destruct;
- (void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(bool)arg5;
- (void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)executablePathToStallAggregation;
- (id)init;
- (id)systemAggregation;

@end
