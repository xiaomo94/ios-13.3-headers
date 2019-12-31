/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFWorkflow : NSObject <NSCopying, NSSecureCoding, WFActionEventObserver, WFNaming> {
    NSArray * _actions;
    long long  _environment;
    WFActionGroupingCache * _groupingCache;
    NSArray * _importQuestions;
    NSArray * _inputClasses;
    WFWorkflowReference * _overridenReference;
    WFWorkflowQuarantine * _quarantine;
    WFWorkflowRecord * _record;
    bool  _saveDisabled;
    <WFRecordStorageProvider> * _storageProvider;
    WFVariableAvailability * _variableAvailability;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSString *actionsDescription;
@property (nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) NSString *galleryIdentifier;
@property (nonatomic, readonly) WFActionGroupingCache *groupingCache;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hiddenFromLibraryAndSync;
@property (nonatomic) bool hiddenInComplication;
@property (nonatomic, retain) WFWorkflowIcon *icon;
@property (nonatomic, copy) NSArray *importQuestions;
@property (nonatomic, copy) NSArray *inputClasses;
@property (nonatomic, copy) NSString *legacyName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) WFWorkflowReference *overridenReference;
@property (nonatomic, retain) WFWorkflowQuarantine *quarantine;
@property (nonatomic, readonly) WFWorkflowRecord *record;
@property (nonatomic, readonly) WFWorkflowReference *reference;
@property (nonatomic) long long remoteQuarantineStatus;
@property (getter=isResidentCompatible, nonatomic, readonly) bool residentCompatible;
@property (nonatomic) bool saveDisabled;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) <WFRecordStorageProvider> *storageProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFVariableAvailability *variableAvailability;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly) NSString *workflowID;
@property (nonatomic, readonly) NSString *workflowSubtitle;
@property (nonatomic, copy) NSArray *workflowTypes;

+ (bool)checkClientVersion:(id)arg1 currentVersion:(id)arg2 error:(id*)arg3;
+ (id)defaultName;
+ (id)effectiveInputClassesFromInputClasses:(id)arg1 workflowTypes:(id)arg2;
+ (id)localizedSubtitleWithActionCount:(unsigned long long)arg1;
+ (id)supportedInputClassNames;
+ (id)supportedInputClasses;
+ (bool)supportsSecureCoding;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 error:(id*)arg3;
+ (id)workflowWithReference:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(bool)arg3 environment:(long long)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)action:(id)arg1 didChangeVariableName:(id)arg2 to:(id)arg3;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2;
- (id)actionForSuggestionsDrawer;
- (void)actionNameDidChange:(id)arg1;
- (void)actionOutputDetailsDidChange:(id)arg1;
- (id)actions;
- (id)actionsDescription;
- (id)actionsGroupedWithAction:(id)arg1;
- (void)addAction:(id)arg1;
- (id)associatedAppBundleIdentifier;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)authorizeAccessResourcesIfNeeded;
- (Class)classForKeyedArchiver;
- (void)configureAsSingleStepShortcutIfNecessary:(id /* block */)arg1;
- (void)configureWithShortcut:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createUserActivityForViewing;
- (void)dealloc;
- (id)description;
- (id)editingDelegate;
- (id)effectiveInputClasses;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (id)eventDictionary;
- (id)galleryIdentifier;
- (void)generateShortcutRepresentation:(id /* block */)arg1;
- (id)groupingCache;
- (bool)hasStorageProvider;
- (bool)hiddenFromLibraryAndSync;
- (bool)hiddenInComplication;
- (id)icon;
- (id)importQuestions;
- (id)init;
- (id)initWithActionDonation:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 error:(id*)arg3;
- (id)initWithRecord:(id)arg1 storageProvider:(id)arg2 migrateIfNecessary:(bool)arg3 environment:(long long)arg4 error:(id*)arg5;
- (id)initWithShortcut:(id)arg1 error:(id*)arg2;
- (void)initializeAddedAction:(id)arg1;
- (id)inputClasses;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertActions:(id)arg1 atIndexes:(id)arg2;
- (bool)isResidentCompatible;
- (bool)isUntitled;
- (id)legacyName;
- (void)loadActionDescriptionIconsMaxCount:(long long)arg1 completion:(id /* block */)arg2;
- (void)loadFromRecord;
- (id)localizedActionsSummary;
- (id)localizedSubtitle;
- (void)moveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (id)name;
- (void)overrideReference:(id)arg1;
- (id)overridenReference;
- (void)performBatchOperation:(id /* block */)arg1;
- (id)quarantine;
- (id)record;
- (id)reference;
- (void)reloadFromRecord;
- (long long)remoteQuarantineStatus;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (void)requestToRunScriptsOnDomain:(id)arg1 withUserInterface:(id)arg2 database:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)save;
- (void)saveActionsToRecordIfNeeded;
- (bool)saveDisabled;
- (void)setActions:(id)arg1;
- (void)setEditingDelegate:(id)arg1;
- (void)setHiddenFromLibraryAndSync:(bool)arg1;
- (void)setHiddenInComplication:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setImportQuestions:(id)arg1;
- (void)setInputClasses:(id)arg1;
- (void)setLegacyName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuarantine:(id)arg1;
- (void)setRemoteQuarantineStatus:(long long)arg1;
- (void)setSaveDisabled:(bool)arg1;
- (void)setWorkflowTypes:(id)arg1;
- (id)source;
- (id)storageProvider;
- (void)updateVariablesForAction:(id)arg1 includingImportedVariables:(bool)arg2;
- (id)validImportQuestions;
- (id)variableAvailability;
- (id)wfName;
- (id)workflowByClearingPrivateImportQuestionData;
- (id)workflowID;
- (id)workflowSubtitle;
- (id)workflowTypes;

@end
