/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXTransaction : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSMutableOrderedSet * _mutableActions;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *actions;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *mutableActions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addActionsFromTransaction:(id)arg1;
- (id)allowedClassesForMutableActions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAction:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isComplete;
- (id)mutableActions;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setMutableActions:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
