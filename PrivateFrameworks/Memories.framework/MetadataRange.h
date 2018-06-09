/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MetadataRange : NSObject <NSCopying> {
    NSDictionary * _attributes;
    int  _duration;
    int  _startTime;
    int  _type;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic) int duration;
@property (nonatomic) int startTime;
@property (nonatomic) int type;

+ (id)descriptionForFacePositions:(int)arg1;
+ (id)descriptionForShotType:(int)arg1;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)duration;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1 startTime:(int)arg2 duration:(int)arg3 attributes:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)plistRepresentation;
- (void)setAttributes:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setStartTime:(int)arg1;
- (void)setType:(int)arg1;
- (int)startTime;
- (int)type;

@end
