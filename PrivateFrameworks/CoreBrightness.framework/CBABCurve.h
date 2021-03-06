/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBABCurve : NSObject {
    NSObject<OS_os_log> * _logHandle;
    unsigned long long  _version;
    float  currentLux;
    float  mappedBrightness;
    struct { 
        float minimumBrightness; 
        float maximumBrightness; 
        float bl1; 
        float bl2; 
        float e1; 
        float e2; 
        float eThresh; 
    }  pref;
}

@property (readonly) unsigned long long version;

- (id)copyUserPrefState;
- (id)description;
- (float)getLinearBrightness;
- (unsigned long long)getVersion;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (void)resetToDefaultState;
- (bool)setLux:(float)arg1;
- (void)setSavedPrefences:(id)arg1;
- (void)updateALSParametersForDisplayBrightness:(float)arg1;
- (unsigned long long)version;

@end
