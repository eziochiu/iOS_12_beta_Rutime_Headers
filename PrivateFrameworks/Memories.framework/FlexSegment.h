/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexSegment : NSObject <NSCopying, NSDictionaryCoding> {
    long long  _bars;
    long long  _beatsPerBar;
    NSArray * _customBarMarkers;
    unsigned long long  _errors;
    NSDictionary * _markers;
    NSDictionary * _metadataValues;
    NSString * _name;
    NSString * _nameIndex;
    NSString * _namePrefix;
    NSString * _nameStem;
    NSString * _nameSuffix;
    long long  _priority;
    long long  _sampleCount;
    long long  _sampleRate;
    long long  _samplesPerBar;
    bool  _sliceable;
    NSDictionary * _transitions;
    unsigned long long  _type;
}

@property (nonatomic) long long bars;
@property (nonatomic) long long beatsPerBar;
@property (nonatomic, retain) NSArray *customBarMarkers;
@property (nonatomic) unsigned long long errors;
@property (nonatomic, retain) NSDictionary *markers;
@property (nonatomic, readonly) NSDictionary *metadataValues;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameIndex;
@property (nonatomic, readonly, copy) NSString *namePrefix;
@property (nonatomic, readonly, copy) NSString *nameStem;
@property (nonatomic, readonly, copy) NSString *nameSuffix;
@property (nonatomic) long long priority;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long samplesPerBar;
@property (nonatomic) bool sliceable;
@property (nonatomic, retain) NSDictionary *transitions;
@property (nonatomic) unsigned long long type;

+ (bool)canTransitionFromSegment:(id)arg1 toSegment:(id)arg2 fromBarIndex:(long long)arg3 checkIfPrevented:(bool)arg4;
+ (long long)crossfadeLengthInSamplesForFromSeg:(id)arg1 toSeg:(id)arg2 fadeOutTimeInMsec:(long long)arg3 fadeInTimeInMsec:(long long)arg4 validFadeOutSamples:(long long*)arg5 validFadeInSamples:(long long*)arg6;
+ (id)longLabelForSegmentType:(unsigned long long)arg1;
+ (id)readInfoFromAudioFileAtPath:(id)arg1;
+ (long long)samplesForTimeInMsec:(long long)arg1 atSampleRate:(long long)arg2;
+ (id)segmentWithName:(id)arg1 inSegments:(id)arg2;
+ (id)segmentsWithType:(unsigned long long)arg1 inSegments:(id)arg2;
+ (id)segmentsWithType:(unsigned long long)arg1 nameIndex:(id)arg2 nameSuffix:(id)arg3 inSegments:(id)arg4;
+ (id)shortLabelForSegmentType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_decodeTypeInfoFromSegmentName;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)addOrReplaceTransition:(id)arg1 toSegmentNamed:(id)arg2 fromBarIndex:(long long)arg3;
- (long long)barDurationForBarIndex:(long long)arg1;
- (long long)barEndPositionForBarIndex:(long long)arg1;
- (long long)barStartPositionForBarIndex:(long long)arg1;
- (long long)bars;
- (long long)beatsPerBar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customBarMarkers;
- (id)description;
- (id)encodeAsDictionary;
- (unsigned long long)errors;
- (id)initAsCrossFade:(id)arg1 sampleRate:(long long)arg2 sampleCount:(long long)arg3 beatsPerBar:(long long)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (bool)isPriorityValid;
- (bool)linkedPerBarTransitionsToSegmentNamed:(id)arg1;
- (id)markers;
- (id)metadataValueForKey:(id)arg1;
- (id)metadataValues;
- (id)name;
- (id)nameIndex;
- (id)namePrefix;
- (id)nameStem;
- (id)nameSuffix;
- (long long)priority;
- (bool)relinkAllTransitions;
- (void)removeTransitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;
- (long long)sampleCount;
- (long long)sampleRate;
- (long long)samplesPerBar;
- (void)setBars:(long long)arg1;
- (void)setBeatsPerBar:(long long)arg1;
- (void)setCustomBarMarkers:(id)arg1;
- (void)setErrors:(unsigned long long)arg1;
- (void)setLinkedPerBarTransitions:(bool)arg1 toSegmentNamed:(id)arg2;
- (void)setMarkers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSampleCount:(long long)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setSamplesPerBar:(long long)arg1;
- (void)setSliceable:(bool)arg1;
- (void)setTransitions:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)sliceable;
- (id)transitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;
- (id)transitions;
- (unsigned long long)type;

@end
