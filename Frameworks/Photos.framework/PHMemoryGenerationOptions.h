/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryGenerationOptions : NSObject <NSCopying> {
    NSArray * _blacklistedMemories;
    NSDate * _date;
    NSArray * _existingMemories;
    NSDictionary * _extraParameters;
    CLLocation * _location;
    NSArray * _peopleNames;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _reason;
}

@property (nonatomic, retain) NSArray *blacklistedMemories;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSArray *existingMemories;
@property (nonatomic, retain) NSDictionary *extraParameters;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSArray *peopleNames;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long reason;

- (void).cxx_destruct;
- (id)blacklistedMemories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dictionaryRepresentation;
- (id)existingMemories;
- (id)extraParameters;
- (id)init;
- (id)location;
- (id)peopleNames;
- (id)photoLibrary;
- (unsigned long long)reason;
- (void)setBlacklistedMemories:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExistingMemories:(id)arg1;
- (void)setExtraParameters:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPeopleNames:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setReason:(unsigned long long)arg1;

@end
