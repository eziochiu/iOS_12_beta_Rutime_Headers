/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTCheckpointSignpost : CUTCheckpoint <NSSecureCoding> {
    NSObject<OS_os_log> * _log;
    long long  _scope;
    unsigned long long  _signpostID;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) long long scope;
@property (nonatomic) unsigned long long signpostID;

- (void).cxx_destruct;
- (bool)_verifyMatchingName:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)log;
- (long long)scope;
- (void)setLog:(id)arg1;
- (void)setScope:(long long)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (unsigned long long)signpostID;

@end