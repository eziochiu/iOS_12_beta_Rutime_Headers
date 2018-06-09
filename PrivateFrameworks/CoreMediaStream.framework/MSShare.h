/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSShare : NSObject <NSCoding> {
    NSString * _UUID;
    NSString * _emailAddress;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _personID;
    int  _sharingOurStream;
    int  _sharingTheirStream;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic) int sharingOurPhotostream;
@property (nonatomic) int sharingOurStream;
@property (nonatomic) int sharingTheirPhotostream;
@property (nonatomic) int sharingTheirStream;

+ (id)share;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)personID;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setSharingOurPhotostream:(int)arg1;
- (void)setSharingOurStream:(int)arg1;
- (void)setSharingTheirPhotostream:(int)arg1;
- (void)setSharingTheirStream:(int)arg1;
- (void)setUUID:(id)arg1;
- (int)sharingOurPhotostream;
- (int)sharingOurStream;
- (int)sharingTheirPhotostream;
- (int)sharingTheirStream;

@end
