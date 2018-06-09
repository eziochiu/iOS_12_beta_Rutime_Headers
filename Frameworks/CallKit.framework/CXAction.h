/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSDate * _commitDate;
    <CXActionDelegate> * _delegate;
    long long  _failureReason;
    long long  _state;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, retain) NSDate *commitDate;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly, copy) NSMutableString *customDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timeoutDate;

+ (bool)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (id)UUID;
- (id)commitDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fail;
- (long long)failureReason;
- (void)fulfill;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isComplete;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCommitDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailureReason:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setUUID:(id)arg1;
- (long long)state;
- (id)timeoutDate;
- (void)updateAsFailedWithReason:(long long)arg1;
- (void)updateAsFulfilled;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
