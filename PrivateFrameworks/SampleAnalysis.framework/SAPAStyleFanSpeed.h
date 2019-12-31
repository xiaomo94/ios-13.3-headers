/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleFanSpeed : NSObject {
    SAFanSpeed * _fanSpeed;
}

@property (retain) SAFanSpeed *fanSpeed;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; double x2; int x3; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)fanSpeed;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; double x2; int x3; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setFanSpeed:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
