/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDDistiller : NSObject {
    NSString * _accumulatedErrorDescription;
    CUIMutableCommonAssetStorage * _assetStore;
    long long  _assetStoreVersionNumber;
    NSString * _assetStoreVersionString;
    NSThread * _callbackThread;
    bool  _cancelled;
    NSArray * _changedProductions;
    id /* block */  _completionHandler;
    CoreThemeDocument * _document;
    bool  _dontPackRenditionsBeforeDistilling;
    int  _fileCompression;
    bool  _finished;
    bool  _incremental;
    TDLogger * _logger;
    NSArray * _mainThreadPerformRunLoopModes;
    NSMutableArray * _renditionEntries;
    bool  _successful;
}

@property (nonatomic, retain) NSString *accumulatedErrorDescription;
@property long long assetStoreVersionNumber;
@property (copy) NSString *assetStoreVersionString;
@property (retain) NSThread *callbackThread;
@property (getter=isCancelled) bool cancelled;
@property (copy) id /* block */ completionHandler;
@property (nonatomic) bool dontPackRenditionsBeforeDistilling;
@property int fileCompression;
@property (getter=isFinished) bool finished;
@property (getter=isIncremental) bool incremental;
@property (retain) TDLogger *logger;
@property (getter=isSuccessful) bool successful;
@property (nonatomic, readonly) NSUUID *uuid;

- (void)_accumulateErrorDescription:(id)arg1;
- (void)_binaryInsertList:(id)arg1;
- (id)_copyStandardEffectDefinitions;
- (void)_distill:(id)arg1;
- (void)_distillChanges:(id)arg1;
- (bool)_distillColorDefinitions:(id)arg1;
- (bool)_distillCursorFacetDefinitions:(id)arg1;
- (bool)_distillFonts:(id)arg1;
- (bool)_distillNamedElements:(id)arg1;
- (id)_filterRenditions:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logErrorAndAccumulateDescription:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logInfo:(id)arg1;
- (void)_logWarning:(id)arg1;
- (id)_productionForRenditionSpec:(id)arg1;
- (bool)_recordRenditionEntryFromRendition:(id)arg1;
- (unsigned long long)_removeRenditionsWithKeySpecs:(id)arg1;
- (id)_renditionsFromProductions:(id)arg1 error:(id*)arg2;
- (id)_renditionsWithError:(id*)arg1;
- (void)_resetDocumentUuid:(id)arg1;
- (bool)_setupWithOutputPath:(id)arg1 attemptIncremental:(bool)arg2;
- (bool)_sortRenditionEntries;
- (bool)_storeRenditions;
- (id)_textureFaceExclusionPredicate;
- (id)accumulatedErrorDescription;
- (long long)assetStoreVersionNumber;
- (id)assetStoreVersionString;
- (bool)assetStoreWriteToDisk;
- (id)callbackThread;
- (void)cancelDistill;
- (id /* block */)completionHandler;
- (id)dateOfLastDistill;
- (void)dealloc;
- (bool)distillCatalogGlobals;
- (bool)distillCursorFacetDefinitions;
- (bool)distillCustomColors;
- (bool)distillCustomFontSizes;
- (bool)distillCustomFonts;
- (bool)distillLocalizationss;
- (bool)distillNamedElements;
- (bool)distillRenditions;
- (bool)distillThemeAppearances;
- (id)documentPath;
- (bool)dontPackRenditionsBeforeDistilling;
- (int)fileCompression;
- (void)finishDistillationWithSuccess:(bool)arg1;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(bool)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(bool)arg3 versionString:(id)arg4;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isIncremental;
- (bool)isSuccessful;
- (id)keyFormatData;
- (id)logger;
- (void)markDistillationAsFinished;
- (void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)saveAndDistillWithCompletionHandler:(id /* block */)arg1;
- (void)setAccumulatedErrorDescription:(id)arg1;
- (void)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 fromRenditionSpec:(id)arg3;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)setAssetStoreUuid:(id)arg1;
- (void)setAssetStoreVersionNumber:(long long)arg1;
- (void)setAssetStoreVersionString:(id)arg1;
- (void)setCallbackThread:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDontPackRenditionsBeforeDistilling:(bool)arg1;
- (void)setFileCompression:(int)arg1;
- (void)setFinished:(bool)arg1;
- (void)setIncremental:(bool)arg1;
- (void)setLogger:(id)arg1;
- (void)setSuccessful:(bool)arg1;
- (bool)sortAndStoreRenditions;
- (id)uuid;
- (void)waitTimerDidFire:(id)arg1;
- (void)waitUntilFinished;

@end
