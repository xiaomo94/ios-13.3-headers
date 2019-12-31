/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

@interface SRMemoryMapping : NSObject {
    int  _advice;
    void * _currentPosition;
    void * _mappedAddress;
    long long  _offset;
    unsigned long long  _pageAlignedSize;
    int  _protection;
    unsigned long long  _size;
    void * _start;
}

@property void*currentPosition;
@property (readonly) unsigned long long freeSpace;
@property void*mappedAddress;
@property long long offset;
@property unsigned long long pageAlignedSize;
@property unsigned long long size;
@property void*start;
@property (readonly) unsigned long long used;
@property (getter=isWritable, readonly) bool writable;

+ (void)initialize;

- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)containsAddress:(const void*)arg1;
- (void*)currentPosition;
- (void)dealloc;
- (unsigned long long)freeSpace;
- (id)initWithSize:(unsigned long long)arg1 protection:(int)arg2 advice:(int)arg3 offset:(long long)arg4;
- (bool)isValidWriteToDestinationAddress:(void*)arg1 withLength:(unsigned long long)arg2 bytes:(const void*)arg3;
- (bool)isWritable;
- (bool)mapWithFileHandle:(id)arg1;
- (void*)mappedAddress;
- (long long)offset;
- (unsigned long long)pageAlignedSize;
- (void)setCurrentPosition:(void*)arg1;
- (void)setMappedAddress:(void*)arg1;
- (void)setOffset:(long long)arg1;
- (void)setPageAlignedSize:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStart:(void*)arg1;
- (unsigned long long)size;
- (void*)start;
- (void)sync;
- (void)unmap;
- (unsigned long long)used;
- (void)writeBytes:(const void*)arg1 toOffset:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end
