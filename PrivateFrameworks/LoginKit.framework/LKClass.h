/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKClass : NSObject <LKStudentProviding, NSSecureCoding> {
    NSMutableDictionary * _avatarNameSimilarityDictionary;
    NSString * _classDescription;
    NSNumber * _classID;
    NSString * _classImageURL;
    NSString * _className;
    NSMutableDictionary * _givenNameSimilarityDictionary;
    NSArray * _instructors;
    NSArray * _students;
}

@property (nonatomic, retain) NSMutableDictionary *avatarNameSimilarityDictionary;
@property (nonatomic, retain) NSString *classDescription;
@property (nonatomic, retain) NSNumber *classID;
@property (nonatomic, retain) NSString *classImageURL;
@property (nonatomic, retain) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *givenNameSimilarityDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *instructors;
@property (nonatomic, copy) NSArray *students;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateNamingSimilarityInfoForUser:(id)arg1;
- (id)avatarNameSimilarityDictionary;
- (id)classDescription;
- (id)classID;
- (id)classImageURL;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)givenNameSimilarityDictionary;
- (unsigned long long)hash;
- (id)initWithClassDictionary:(id)arg1 usersByUserIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStudents:(id)arg1 instructors:(id)arg2 className:(id)arg3 classID:(id)arg4;
- (id)instructors;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLKClass:(id)arg1;
- (void)setAvatarNameSimilarityDictionary:(id)arg1;
- (void)setClassDescription:(id)arg1;
- (void)setClassID:(id)arg1;
- (void)setClassImageURL:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setGivenNameSimilarityDictionary:(id)arg1;
- (void)setInstructors:(id)arg1;
- (void)setStudents:(id)arg1;
- (id)sortUsers:(id)arg1;
- (id)students;

@end
