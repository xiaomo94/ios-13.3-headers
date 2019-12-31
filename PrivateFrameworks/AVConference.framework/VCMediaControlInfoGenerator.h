/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaControlInfoGenerator : NSObject <VCMediaControlInfoDelegate> {
    struct __CFDictionary { } * _callbacksDict;
    NSMutableArray * _controlInfoPool;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _controlInfoPoolLock;
    unsigned int  _optionBitmap;
    unsigned int  _type;
    unsigned char  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) unsigned int type;
@property (readonly) unsigned char version;

- (int)addMediaControlInfoOption:(unsigned int)arg1;
- (void)dealloc;
- (int)deregisterCallbacksWithContext:(void*)arg1;
- (void)disposeControlInfo:(id)arg1;
- (unsigned long long)feedbackSize;
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;
- (void*)newControlInfo;
- (id)newControlInfoFromPool;
- (void*)newControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg3;
- (void*)newMediaControlInfo;
- (void*)newMediaControlInfoWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg3;
- (int)registerFillBlobCallback:(int (*)arg1 processBlobCallback:(int (*)arg2 context:(void*)arg3;
- (unsigned int)type;
- (unsigned char)version;

@end
