/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    double  _delay;
    bool  _isSyncDown;
    int  _lastErrorKind;
    BRMangledID * _mangledID;
    double  _nextTry;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) int lastErrorKind;
@property (nonatomic, retain) BRMangledID *mangledID;
@property (nonatomic, readonly) double nextTry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clear;
- (double)delay;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMangledID:(id)arg1 isSyncDown:(bool)arg2;
- (int)lastErrorKind;
- (id)mangledID;
- (double)nextTry;
- (void)setMangledID:(id)arg1;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1;
- (bool)updateForClearingOutOfQuota;
- (void)updateForError:(id)arg1;

@end
