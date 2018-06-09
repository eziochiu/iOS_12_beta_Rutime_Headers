/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

@interface WRM_iRATProximityRecommendationLogging : NSObject {
    NSUUID * _Uuid;
    unsigned long long  _btRSSI;
    long long  _expectedThroughputVIBE;
    long long  _expectedThroughputVO;
    long long  _lsmRecommendationBe;
    long long  _lsmRecommendationVoice;
    long long  _packetLifetimeVIBE;
    long long  _pkgLifeTimeVO;
    long long  _pktLossRateVO;
    long long  _wifiRSSI;
    long long  _wifiSNR;
}

@property (nonatomic, retain) NSUUID *Uuid;
@property (nonatomic) unsigned long long btRSSI;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) long long expectedThroughputVO;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) long long lsmRecommendationVoice;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) long long pkgLifeTimeVO;
@property (nonatomic) long long pktLossRateVO;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) long long wifiSNR;

- (id)Uuid;
- (unsigned long long)btRSSI;
- (void)dealloc;
- (long long)expectedThroughputVIBE;
- (long long)expectedThroughputVO;
- (id)init;
- (long long)lsmRecommendationBe;
- (long long)lsmRecommendationVoice;
- (long long)packetLifetimeVIBE;
- (long long)pkgLifeTimeVO;
- (long long)pktLossRateVO;
- (void)setBtRSSI:(unsigned long long)arg1;
- (void)setExpectedThroughputVIBE:(long long)arg1;
- (void)setExpectedThroughputVO:(long long)arg1;
- (void)setLsmRecommendationBe:(long long)arg1;
- (void)setLsmRecommendationVoice:(long long)arg1;
- (void)setPacketLifetimeVIBE:(long long)arg1;
- (void)setPkgLifeTimeVO:(long long)arg1;
- (void)setPktLossRateVO:(long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWifiRSSI:(long long)arg1;
- (void)setWifiSNR:(long long)arg1;
- (long long)wifiRSSI;
- (long long)wifiSNR;

@end
