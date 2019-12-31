/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSADocumentRoot : TSKDocumentRoot <TSKImportExportDelegate> {
    NSString * _creationLanguage;
    unsigned long long  _creationLanguageWritingDirection;
    <TSADocumentRootDelegate> * _delegate;
    bool  _hasPreUFFVersion;
    bool  _isClosed;
    bool  _needsMovieCompatibilityUpgrade;
    int  _needsToCaptureViewState;
    TSTCustomFormatList * _tablesCustomFormatList;
    NSString * _templateIdentifier;
    NSMutableDictionary * _upgradeState;
    NSMutableSet * _warnings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (nonatomic) <TSADocumentRootDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDocumentEditedSinceLastSave, nonatomic, readonly) bool documentEditedSinceLastSave;
@property (nonatomic, readonly) TSADrawableFactory *drawableFactory;
@property (nonatomic) bool hasPreUFFVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool importingDesignDemoDoc;
@property (nonatomic, readonly) bool isBrowsingVersions;
@property (nonatomic, readonly) NSSet *missingFontWarningMessages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool needsMovieCompatibilityUpgrade;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *templateIdentifier;

+ (id)persistenceWarningsForData:(id)arg1 isReadable:(bool)arg2 isExternal:(bool)arg3;

- (long long)addObserverForICloudTeardownWithBlock:(id /* block */)arg1;
- (void)addWarning:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(bool)arg2;
- (id)creationLanguage;
- (id)customFormatList;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (id)defaultDraftName;
- (id)delegate;
- (void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3;
- (void)didEnterBackground;
- (void)didSaveWithEncryptionChange;
- (id)documentCachePath;
- (void)documentDidLoad;
- (void)documentDidSave;
- (id)drawableFactory;
- (bool)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3;
- (void)fulfillPasteboardPromises;
- (bool)hasICloudConflict;
- (bool)hasPreUFFVersion;
- (void)importerDidFinish:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(bool)arg2;
- (bool)isDocumentEditedSinceLastSave;
- (bool)isMultiPageForQuickLook;
- (id)missingFontWarningMessages;
- (id)name;
- (bool)needsMovieCompatibilityUpgrade;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3;
- (struct CGImageSource { }*)newImageSourceForDocumentCachePath:(id)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 override:(id)arg3;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(bool*)arg2 number:(unsigned long long*)arg3;
- (void)p_registerAllFormulasAfterImport;
- (void)p_removeStyles:(id)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)p_updateCreationLanguage;
- (id)packageDataForWrite;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)prepareForSavingAsTemplate;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)protected_defaultTextPresetOrdering;
- (id)referencedStylesOfClass:(Class)arg1;
- (void)removeWarning:(id)arg1;
- (void)resumeBackgroundActivities;
- (void)resumeThumbnailing;
- (void)setCreationLanguage:(id)arg1;
- (void)setCustomFormatList:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasPreUFFVersion:(bool)arg1;
- (void)setNeedsMovieCompatibilityUpgrade:(bool)arg1;
- (void)setTemplateIdentifier:(id)arg1;
- (bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(bool)arg2;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (id)templateIdentifier;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (id)upgradeState;
- (id)warnings;
- (void)willClose;
- (void)willEnterForeground;
- (bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned long long)writingDirection;

@end
