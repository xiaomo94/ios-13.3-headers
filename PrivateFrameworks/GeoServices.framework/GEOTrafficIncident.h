/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficIncident : PBCodable <NSCopying> {
    int  _advisoryType;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _alertCCodes;
    NSString * _area;
    int  _color;
    NSString * _crossStreetName;
    bool  _curated;
    unsigned int  _delaySeconds;
    unsigned long long  _durationSeconds;
    struct { 
        unsigned int has_durationSeconds : 1; 
        unsigned int has_startTime : 1; 
        unsigned int has_updateTime : 1; 
        unsigned int has_advisoryType : 1; 
        unsigned int has_color : 1; 
        unsigned int has_delaySeconds : 1; 
        unsigned int has_laneClosureCount : 1; 
        unsigned int has_laneClosureType : 1; 
        unsigned int has_maxZoom : 1; 
        unsigned int has_minZoom : 1; 
        unsigned int has_speedKph : 1; 
        unsigned int has_vendor : 1; 
        unsigned int has_curated : 1; 
        unsigned int has_hidden : 1; 
        unsigned int has_ignored : 1; 
        unsigned int has_navigationAlert : 1; 
        unsigned int read_alertCCodes : 1; 
        unsigned int read_types : 1; 
        unsigned int read_area : 1; 
        unsigned int read_crossStreetName : 1; 
        unsigned int read_incidentDescriptions : 1; 
        unsigned int read_incidentId : 1; 
        unsigned int read_laneMessages : 1; 
        unsigned int read_location : 1; 
        unsigned int read_name : 1; 
        unsigned int read_paths : 1; 
        unsigned int read_primaryStreetName : 1; 
        unsigned int wrote_alertCCodes : 1; 
        unsigned int wrote_types : 1; 
        unsigned int wrote_area : 1; 
        unsigned int wrote_crossStreetName : 1; 
        unsigned int wrote_durationSeconds : 1; 
        unsigned int wrote_incidentDescriptions : 1; 
        unsigned int wrote_incidentId : 1; 
        unsigned int wrote_laneMessages : 1; 
        unsigned int wrote_location : 1; 
        unsigned int wrote_name : 1; 
        unsigned int wrote_paths : 1; 
        unsigned int wrote_primaryStreetName : 1; 
        unsigned int wrote_startTime : 1; 
        unsigned int wrote_updateTime : 1; 
        unsigned int wrote_advisoryType : 1; 
        unsigned int wrote_color : 1; 
        unsigned int wrote_delaySeconds : 1; 
        unsigned int wrote_laneClosureCount : 1; 
        unsigned int wrote_laneClosureType : 1; 
        unsigned int wrote_maxZoom : 1; 
        unsigned int wrote_minZoom : 1; 
        unsigned int wrote_speedKph : 1; 
        unsigned int wrote_vendor : 1; 
        unsigned int wrote_curated : 1; 
        unsigned int wrote_hidden : 1; 
        unsigned int wrote_ignored : 1; 
        unsigned int wrote_navigationAlert : 1; 
    }  _flags;
    bool  _hidden;
    bool  _ignored;
    NSMutableArray * _incidentDescriptions;
    NSString * _incidentId;
    unsigned int  _laneClosureCount;
    int  _laneClosureType;
    NSMutableArray * _laneMessages;
    GEOLatLng * _location;
    unsigned int  _maxZoom;
    unsigned int  _minZoom;
    NSString * _name;
    bool  _navigationAlert;
    NSMutableArray * _paths;
    NSString * _primaryStreetName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    float  _speedKph;
    unsigned long long  _startTime;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _types;
    unsigned long long  _updateTime;
    int  _vendor;
}

@property (nonatomic) int advisoryType;
@property (nonatomic, readonly) unsigned int*alertCCodes;
@property (nonatomic, readonly) unsigned long long alertCCodesCount;
@property (nonatomic, retain) NSString *area;
@property (nonatomic) int color;
@property (nonatomic, retain) NSString *crossStreetName;
@property (nonatomic) bool curated;
@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) unsigned long long durationSeconds;
@property (nonatomic) bool hasAdvisoryType;
@property (nonatomic, readonly) bool hasArea;
@property (nonatomic) bool hasColor;
@property (nonatomic, readonly) bool hasCrossStreetName;
@property (nonatomic) bool hasCurated;
@property (nonatomic) bool hasDelaySeconds;
@property (nonatomic) bool hasDurationSeconds;
@property (nonatomic) bool hasHidden;
@property (nonatomic) bool hasIgnored;
@property (nonatomic, readonly) bool hasIncidentId;
@property (nonatomic) bool hasLaneClosureCount;
@property (nonatomic) bool hasLaneClosureType;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMaxZoom;
@property (nonatomic) bool hasMinZoom;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasNavigationAlert;
@property (nonatomic, readonly) bool hasPrimaryStreetName;
@property (nonatomic) bool hasSpeedKph;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasUpdateTime;
@property (nonatomic) bool hasVendor;
@property (nonatomic) bool hidden;
@property (nonatomic) bool ignored;
@property (nonatomic, retain) NSMutableArray *incidentDescriptions;
@property (nonatomic, retain) NSString *incidentId;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (nonatomic, retain) NSMutableArray *laneMessages;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned int maxZoom;
@property (nonatomic) unsigned int minZoom;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool navigationAlert;
@property (nonatomic, retain) NSMutableArray *paths;
@property (nonatomic, retain) NSString *primaryStreetName;
@property (nonatomic) float speedKph;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic, readonly) int*types;
@property (nonatomic, readonly) unsigned long long typesCount;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) int vendor;

+ (Class)incidentDescriptionType;
+ (bool)isValid:(id)arg1;
+ (Class)laneMessagesType;
+ (Class)pathType;

- (void).cxx_destruct;
- (int)StringAsAdvisoryType:(id)arg1;
- (int)StringAsColor:(id)arg1;
- (int)StringAsLaneClosureType:(id)arg1;
- (int)StringAsTypes:(id)arg1;
- (int)StringAsVendor:(id)arg1;
- (void)_addNoFlagsAlertCCode:(unsigned int)arg1;
- (void)_addNoFlagsIncidentDescription:(id)arg1;
- (void)_addNoFlagsLaneMessages:(id)arg1;
- (void)_addNoFlagsPath:(id)arg1;
- (void)_addNoFlagsType:(int)arg1;
- (void)_readAlertCCodes;
- (void)_readArea;
- (void)_readCrossStreetName;
- (void)_readIncidentDescriptions;
- (void)_readIncidentId;
- (void)_readLaneMessages;
- (void)_readLocation;
- (void)_readName;
- (void)_readPaths;
- (void)_readPrimaryStreetName;
- (void)_readTypes;
- (void)addAlertCCode:(unsigned int)arg1;
- (void)addIncidentDescription:(id)arg1;
- (void)addLaneMessages:(id)arg1;
- (void)addPath:(id)arg1;
- (void)addType:(int)arg1;
- (int)advisoryType;
- (id)advisoryTypeAsString:(int)arg1;
- (unsigned int)alertCCodeAtIndex:(unsigned long long)arg1;
- (unsigned int*)alertCCodes;
- (unsigned long long)alertCCodesCount;
- (id)area;
- (void)clearAlertCCodes;
- (void)clearIncidentDescriptions;
- (void)clearLaneMessages;
- (void)clearPaths;
- (void)clearTypes;
- (int)color;
- (id)colorAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreetName;
- (bool)curated;
- (void)dealloc;
- (unsigned int)delaySeconds;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationSeconds;
- (bool)hasAdvisoryType;
- (bool)hasArea;
- (bool)hasColor;
- (bool)hasCrossStreetName;
- (bool)hasCurated;
- (bool)hasDelaySeconds;
- (bool)hasDurationSeconds;
- (bool)hasHidden;
- (bool)hasIgnored;
- (bool)hasIncidentId;
- (bool)hasLaneClosureCount;
- (bool)hasLaneClosureType;
- (bool)hasLocation;
- (bool)hasMaxZoom;
- (bool)hasMinZoom;
- (bool)hasName;
- (bool)hasNavigationAlert;
- (bool)hasPrimaryStreetName;
- (bool)hasSpeedKph;
- (bool)hasStartTime;
- (bool)hasUpdateTime;
- (bool)hasVendor;
- (unsigned long long)hash;
- (bool)hidden;
- (bool)ignored;
- (id)incidentDescriptionAtIndex:(unsigned long long)arg1;
- (id)incidentDescriptions;
- (unsigned long long)incidentDescriptionsCount;
- (id)incidentId;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)laneClosureCount;
- (int)laneClosureType;
- (id)laneClosureTypeAsString:(int)arg1;
- (id)laneMessages;
- (id)laneMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneMessagesCount;
- (id)location;
- (unsigned int)maxZoom;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minZoom;
- (id)name;
- (bool)navigationAlert;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)paths;
- (unsigned long long)pathsCount;
- (id)primaryStreetName;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdvisoryType:(int)arg1;
- (void)setAlertCCodes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setArea:(id)arg1;
- (void)setColor:(int)arg1;
- (void)setCrossStreetName:(id)arg1;
- (void)setCurated:(bool)arg1;
- (void)setDelaySeconds:(unsigned int)arg1;
- (void)setDurationSeconds:(unsigned long long)arg1;
- (void)setHasAdvisoryType:(bool)arg1;
- (void)setHasColor:(bool)arg1;
- (void)setHasCurated:(bool)arg1;
- (void)setHasDelaySeconds:(bool)arg1;
- (void)setHasDurationSeconds:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasIgnored:(bool)arg1;
- (void)setHasLaneClosureCount:(bool)arg1;
- (void)setHasLaneClosureType:(bool)arg1;
- (void)setHasMaxZoom:(bool)arg1;
- (void)setHasMinZoom:(bool)arg1;
- (void)setHasNavigationAlert:(bool)arg1;
- (void)setHasSpeedKph:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasUpdateTime:(bool)arg1;
- (void)setHasVendor:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIgnored:(bool)arg1;
- (void)setIncidentDescriptions:(id)arg1;
- (void)setIncidentId:(id)arg1;
- (void)setLaneClosureCount:(unsigned int)arg1;
- (void)setLaneClosureType:(int)arg1;
- (void)setLaneMessages:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMaxZoom:(unsigned int)arg1;
- (void)setMinZoom:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setNavigationAlert:(bool)arg1;
- (void)setPaths:(id)arg1;
- (void)setPrimaryStreetName:(id)arg1;
- (void)setSpeedKph:(float)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUpdateTime:(unsigned long long)arg1;
- (void)setVendor:(int)arg1;
- (float)speedKph;
- (unsigned long long)startTime;
- (int)typeAtIndex:(unsigned long long)arg1;
- (int*)types;
- (id)typesAsString:(int)arg1;
- (unsigned long long)typesCount;
- (unsigned long long)updateTime;
- (int)vendor;
- (id)vendorAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
