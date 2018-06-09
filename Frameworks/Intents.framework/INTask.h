/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTask : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _createdDateComponents;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    INSpatialEventTrigger * _spatialEventTrigger;
    long long  _status;
    long long  _taskType;
    INTemporalEventTrigger * _temporalEventTrigger;
    INSpeakableString * _title;
}

@property (nonatomic, readonly, copy) NSDateComponents *createdDateComponents;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDateComponents *modifiedDateComponents;
@property (nonatomic, readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long taskType;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly, copy) INSpeakableString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateComponents;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (id)spatialEventTrigger;
- (long long)status;
- (long long)taskType;
- (id)temporalEventTrigger;
- (id)title;

@end
