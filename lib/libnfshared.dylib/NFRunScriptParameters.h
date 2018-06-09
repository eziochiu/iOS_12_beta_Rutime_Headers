/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFRunScriptParameters : NSObject <NSSecureCoding> {
    bool  _checkWhitelist;
    bool  _deactivateAllApps;
    bool  _includeAPDUDuration;
    bool  _initialSelectBeforeRun;
    unsigned long long  _outFinalSWStatus;
    double  _outTotalAPDUExecutionDuration;
    NSString * _seid;
    NSArray * _whitelistedAID;
}

@property bool checkWhitelist;
@property bool deactivateAllApps;
@property bool includeAPDUDuration;
@property bool initialSelectBeforeRun;
@property unsigned long long outFinalSWStatus;
@property double outTotalAPDUExecutionDuration;
@property (retain) NSString *seid;
@property (retain) NSArray *whitelistedAID;

+ (bool)supportsSecureCoding;

- (bool)checkWhitelist;
- (bool)deactivateAllApps;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAPDUDuration;
- (id)initWithCoder:(id)arg1;
- (bool)initialSelectBeforeRun;
- (unsigned long long)outFinalSWStatus;
- (double)outTotalAPDUExecutionDuration;
- (id)seid;
- (void)setCheckWhitelist:(bool)arg1;
- (void)setDeactivateAllApps:(bool)arg1;
- (void)setIncludeAPDUDuration:(bool)arg1;
- (void)setInitialSelectBeforeRun:(bool)arg1;
- (void)setOutFinalSWStatus:(unsigned long long)arg1;
- (void)setOutTotalAPDUExecutionDuration:(double)arg1;
- (void)setSeid:(id)arg1;
- (void)setWhitelistedAID:(id)arg1;
- (id)whitelistedAID;

@end
