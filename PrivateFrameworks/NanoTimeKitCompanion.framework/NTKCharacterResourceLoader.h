/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterResourceLoader : NSObject {
    NSMutableArray * _array;
    NSMutableArray * _arrayByLocale;
    unsigned long long  _bufferOffsetArm;
    unsigned long long  _bufferOffsetBackground;
    unsigned long long  _bufferOffsetBody;
    unsigned long long  _bufferOffsetFlower;
    unsigned long long  _bufferOffsetFoot;
    unsigned long long  _bufferOffsetHand;
    unsigned long long  _bufferOffsetHead;
    unsigned long long  _bufferOffsetSkirt;
    NSBundle * _bundle;
    unsigned long long  _clients;
    CLKDevice * _clkDevice;
    CLKUIMmapFile * _commonBankArab;
    CLKUIMmapFile * _commonBankDeva;
    CLKUIMmapFile * _commonBankLatn;
    NSMutableDictionary * _mapping;
    CLKUIMmapFile * _mickeyBank;
    CLKUIMmapFile * _minnieBank;
    <MTLBuffer> * _mtlBuffer;
    <MTLDevice> * _mtlDevice;
    <MTLRenderPipelineState> * _renderPipelines;
    unsigned long long  _viewMtlPixelFormat;
}

@property (nonatomic, readonly) unsigned long long bufferOffsetArm;
@property (nonatomic, readonly) unsigned long long bufferOffsetBackground;
@property (nonatomic, readonly) unsigned long long bufferOffsetBody;
@property (nonatomic, readonly) unsigned long long bufferOffsetFlower;
@property (nonatomic, readonly) unsigned long long bufferOffsetFoot;
@property (nonatomic, readonly) unsigned long long bufferOffsetHand;
@property (nonatomic, readonly) unsigned long long bufferOffsetHead;
@property (nonatomic, readonly) unsigned long long bufferOffsetSkirt;
@property (nonatomic, readonly) <MTLBuffer> *mtlBuffer;

+ (void)_deallocInstanceForDevice:(id)arg1;
+ (id)sharedInstanceForDevice:(id)arg1 withPixelFormat:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_asyncDeallocInstance;
- (id)_loadBank:(id)arg1 toArrays:(unsigned long long)arg2 allowNewKeys:(bool)arg3;
- (void)_loadMTLBufferData;
- (void)_loadPrograms;
- (void)_loadTextures;
- (void)_setupPipelineForType:(unsigned long long)arg1 vertex:(id)arg2 fragment:(id)arg3 blending:(bool)arg4 inLibrary:(id)arg5 librarySPI:(id)arg6;
- (void)addClient;
- (unsigned long long)bufferOffsetArm;
- (unsigned long long)bufferOffsetBackground;
- (unsigned long long)bufferOffsetBody;
- (unsigned long long)bufferOffsetFlower;
- (unsigned long long)bufferOffsetFoot;
- (unsigned long long)bufferOffsetHand;
- (unsigned long long)bufferOffsetHead;
- (unsigned long long)bufferOffsetSkirt;
- (void)dealloc;
- (id)getMTLTexture:(id)arg1;
- (id)getPipelineForProgramType:(unsigned long long)arg1;
- (id)initForDevice:(id)arg1 withPixelFormat:(unsigned long long)arg2;
- (void)localeChanged;
- (id)mtlBuffer;
- (id)mtlTextureWithName:(id)arg1;
- (id)mtlTextureWithName:(id)arg1 prefix:(id)arg2;
- (void)prime;
- (void)removeClient;
- (id)textureWithName:(id)arg1;
- (id)textureWithName:(id)arg1 prefix:(id)arg2;

@end
