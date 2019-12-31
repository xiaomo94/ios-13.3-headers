/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {
    <TSUStreamReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;
- (bool)processData:(id*)arg1 isDone:(bool)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg1;
- (id)uncompressData:(id)arg1;
- (id)uncompressDataFromSource:(struct SnappySource { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; unsigned long long x7; char *x8; }*)arg1;

@end