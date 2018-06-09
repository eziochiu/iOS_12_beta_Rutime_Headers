/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEntity : NSObject {
    CSPerson * _author;
    NSString * _content;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contentRangeOfInterest;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _creationTimestamp;
    SGDuplicateKey * _duplicateKey;
    unsigned long long  _extractionType;
    long long  _groupId;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _lastModifiedTimestamp;
    NSMutableSet * _locations;
    long long  _masterEntityId;
    double  _quality;
    SGRecordId * _recordId;
    NSString * _sourceKey;
    unsigned int  _state;
    NSData * _structuredData;
    NSMutableSet * _tags;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _tagsLock;
    NSSet * _tagsSnapshot;
    SGSimpleTimeRange * _timeRange;
    NSString * _title;
}

@property (nonatomic, retain) CSPerson *author;
@property (nonatomic, copy) NSString *content;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } contentRangeOfInterest;
@property (nonatomic) struct SGUnixTimestamp_ { double x1; } creationTimestamp;
@property (nonatomic, retain) SGDuplicateKey *duplicateKey;
@property (nonatomic) unsigned long long extractionType;
@property (nonatomic) long long groupId;
@property (nonatomic) struct SGUnixTimestamp_ { double x1; } lastModifiedTimestamp;
@property (nonatomic, retain) NSMutableSet *locations;
@property (nonatomic) long long masterEntityId;
@property (nonatomic) double quality;
@property (nonatomic, retain) SGRecordId *recordId;
@property (nonatomic, copy) NSString *sourceKey;
@property (nonatomic) unsigned int state;
@property (nonatomic, copy) NSData *structuredData;
@property (nonatomic, retain) SGSimpleTimeRange *timeRange;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)addTag:(id)arg1;
- (id)author;
- (id)content;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contentRangeOfInterest;
- (struct SGUnixTimestamp_ { double x1; })creationTimestamp;
- (void)dealloc;
- (id)description;
- (id)duplicateKey;
- (id)extraKeyTag;
- (unsigned long long)extractionType;
- (id)fieldsToSaveOnConfirmation;
- (long long)groupId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEntity:(id)arg1;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntity:(id)arg1;
- (bool)isFromForwardedMessage;
- (bool)isInhuman;
- (bool)isNaturalLanguageEvent;
- (bool)isPartiallyDownloaded;
- (struct SGUnixTimestamp_ { double x1; })lastModifiedTimestamp;
- (id)loadOrigin:(id)arg1;
- (id)locations;
- (long long)masterEntityId;
- (double)quality;
- (id)recordId;
- (void)setAuthor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setDuplicateKey:(id)arg1;
- (void)setExtractionType:(unsigned long long)arg1;
- (void)setGroupId:(long long)arg1;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setLocations:(id)arg1;
- (void)setMasterEntityId:(long long)arg1;
- (void)setQuality:(double)arg1;
- (void)setRecordId:(id)arg1;
- (void)setSourceKey:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStructuredData:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceKey;
- (unsigned int)state;
- (id)structuredData;
- (id)tags;
- (id)templateShortName;
- (id)timeRange;
- (id)title;
- (void)validate;

@end
