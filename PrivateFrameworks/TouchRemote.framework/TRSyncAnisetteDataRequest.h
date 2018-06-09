/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSyncAnisetteDataRequest : TRRequestMessage {
    NSData * _simData;
}

@property (nonatomic, copy) NSData *simData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSimData:(id)arg1;
- (id)simData;

@end
