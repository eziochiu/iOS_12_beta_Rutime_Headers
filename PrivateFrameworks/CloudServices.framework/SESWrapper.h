/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface SESWrapper : NSObject {
    struct ccses_crypto_t { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccmode_ecb {} *x3; struct ccmode_ecb {} *x4; struct ccmode_cbc {} *x5; struct ccmode_cbc {} *x6; struct ccrng_state {} *x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; } * _ccses;
    NSString * _decodedLabel;
    NSData * _escrowBlob;
    NSDate * _escrowDate;
    NSData * _recoveryBlob;
    <SRPClientRequest> * _request;
    struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; } * _srp;
}

@property (nonatomic, readonly) struct ccses_crypto_t { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccmode_ecb {} *x3; struct ccmode_ecb {} *x4; struct ccmode_cbc {} *x5; struct ccmode_cbc {} *x6; struct ccrng_state {} *x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; }*ccses;
@property (nonatomic, copy) NSString *decodedLabel;
@property (nonatomic, readonly, copy) NSString *dsid;
@property (nonatomic, retain) NSData *escrowBlob;
@property (nonatomic, copy) NSDate *escrowDate;
@property (nonatomic, readonly, retain) NSDictionary *escrowRecord;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (retain) NSData *recoveryBlob;
@property (nonatomic, readonly, copy) NSString *recoveryPassphrase;
@property (nonatomic, readonly, retain) <SRPClientRequest> *request;
@property (nonatomic, readonly) struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; }*srp;

- (void).cxx_destruct;
- (struct ccses_crypto_t { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccmode_ecb {} *x3; struct ccmode_ecb {} *x4; struct ccmode_cbc {} *x5; struct ccmode_cbc {} *x6; struct ccrng_state {} *x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; }*)ccses;
- (void)dealloc;
- (id)decodedEscrowRecordFromData:(id)arg1;
- (id)decodedLabel;
- (id)dsid;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey { }*)arg1 error:(id*)arg2;
- (id)escrowBlob;
- (id)escrowDate;
- (id)escrowRecord;
- (id)initWithRequest:(id)arg1;
- (id)label;
- (id)recordID;
- (id)recoveryBlob;
- (id)recoveryPassphrase;
- (id)recoveryResponseForBlob:(id)arg1;
- (id)request;
- (void)setDecodedLabel:(id)arg1;
- (void)setEscrowBlob:(id)arg1;
- (void)setEscrowDate:(id)arg1;
- (void)setRecoveryBlob:(id)arg1;
- (struct ccsrp_ctx { struct ccdigest_info {} *x1; struct ccdh_gp {} *x2; struct ccrng_state {} *x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 16; } x4; unsigned char x5[7]; unsigned long long x6[1]; }*)srp;
- (id)srpInitBlob;
- (id)srpRecoveryBlobFromData:(id)arg1 error:(id*)arg2;
- (id)srpResponseForEscrowBlob:(id)arg1 withKey:(struct __SecKey { }*)arg2;

@end
