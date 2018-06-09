/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeFilter : NSObject <NSCopying, NSSecureCoding> {
    INSpeakableString * _accessory;
    NSArray * _entityIdentifiers;
    long long  _entityType;
    INSpeakableString * _group;
    INSpeakableString * _home;
    INSpeakableString * _homeZone;
    INSpeakableString * _room;
    INSpeakableString * _scene;
    INSpeakableString * _service;
    long long  _serviceType;
    long long  _subServiceType;
}

@property (nonatomic, readonly, copy) INSpeakableString *accessory;
@property (nonatomic, readonly, copy) NSArray *entityIdentifiers;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly, copy) INSpeakableString *group;
@property (nonatomic, readonly, copy) INSpeakableString *home;
@property (nonatomic, readonly, copy) INSpeakableString *homeZone;
@property (nonatomic, readonly, copy) INSpeakableString *room;
@property (nonatomic, readonly, copy) INSpeakableString *scene;
@property (nonatomic, readonly, copy) INSpeakableString *service;
@property (nonatomic, readonly) long long serviceType;
@property (nonatomic, readonly) long long subServiceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifiers;
- (long long)entityType;
- (id)group;
- (unsigned long long)hash;
- (id)home;
- (id)homeZone;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11;
- (bool)isEqual:(id)arg1;
- (id)room;
- (id)scene;
- (id)service;
- (long long)serviceType;
- (long long)subServiceType;

@end
