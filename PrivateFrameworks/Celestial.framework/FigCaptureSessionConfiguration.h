/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    bool  _allowedToRunInWindowedLayout;
    long long  _configurationID;
    bool  _configuresAppAudioSession;
    NSMutableArray * _connections;
    bool  _usesAppAudioSession;
}

@property (nonatomic) bool allowedToRunInWindowedLayout;
@property (nonatomic) long long configurationID;
@property (nonatomic) bool configuresAppAudioSession;
@property (nonatomic, readonly) NSArray *connectionConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sinkConfigurations;
@property (nonatomic, readonly) NSArray *sourceConfigurations;
@property (readonly) Class superclass;
@property (nonatomic) bool usesAppAudioSession;

+ (void)initialize;

- (void)addConnectionConfiguration:(id)arg1;
- (bool)allowedToRunInWindowedLayout;
- (long long)configurationID;
- (bool)configuresAppAudioSession;
- (id)connectionConfigurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeConnectionConfiguration:(id)arg1;
- (void)setAllowedToRunInWindowedLayout:(bool)arg1;
- (void)setConfigurationID:(long long)arg1;
- (void)setConfiguresAppAudioSession:(bool)arg1;
- (void)setUsesAppAudioSession:(bool)arg1;
- (id)sinkConfigurations;
- (id)sourceConfigurations;
- (bool)usesAppAudioSession;

@end
