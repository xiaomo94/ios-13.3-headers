/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioFileManager : NSObject

+ (id)_createAudioFileWriterForOpportuneSpeakListenerWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3;
+ (id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3;
+ (id)_getDateLabel;
+ (void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2;
+ (id)_sharedAudioLoggingQueue;
+ (id)audioFileWriterForAttentiveSiri;
+ (id)createAudioFileWriterForOpportuneSpeakListenerWithInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
+ (id)createAudioFileWriterForRemoteVADWithInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
+ (id)createAudioFileWriterFromWithInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
+ (id)createSelectiveChannelAudioFileWriterWithChannelBitset:(unsigned long long)arg1;
+ (void)generateDeviceAudioLogging:(id)arg1 speechId:(id)arg2;
+ (void)pruneNumberOfLogFilesTo:(unsigned long long)arg1;
+ (void)removeLogFilesOlderThanNDays:(float)arg1;

@end
