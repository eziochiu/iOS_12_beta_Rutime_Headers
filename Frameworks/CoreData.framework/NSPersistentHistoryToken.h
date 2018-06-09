/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryToken : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)storeTokens;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_unarchivedTokenWithData:(id)arg1;

- (id)rc_archiveToken;

@end
