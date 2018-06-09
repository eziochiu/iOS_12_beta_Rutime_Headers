/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMicSourcePipelineConfiguration : NSObject {
    bool  _audioSourceNodeShouldCallEndInterruption;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    NSData * _clientAuditToken;
    NSNumber * _clientPID;
    unsigned int  _clientVersionOfLinkedSDK;
    bool  _configuresAppAudioSession;
    FigCaptureSourceConfiguration * _micConfiguration;
    NSArray * _micConnectionConfigurations;
    FigAudioCaptureConnectionConfiguration * _movieFileAudioConnectionConfiguration;
}

@property (nonatomic) bool audioSourceNodeShouldCallEndInterruption;
@property (nonatomic, retain) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, retain) NSData *clientAuditToken;
@property (nonatomic, retain) NSNumber *clientPID;
@property (nonatomic) unsigned int clientVersionOfLinkedSDK;
@property (nonatomic) bool configuresAppAudioSession;
@property (nonatomic, retain) FigCaptureSourceConfiguration *micConfiguration;
@property (nonatomic, retain) NSArray *micConnectionConfigurations;
@property (nonatomic, retain) FigAudioCaptureConnectionConfiguration *movieFileAudioConnectionConfiguration;

- (bool)audioSourceNodeShouldCallEndInterruption;
- (id)cameraConfiguration;
- (id)clientAuditToken;
- (id)clientPID;
- (unsigned int)clientVersionOfLinkedSDK;
- (bool)configuresAppAudioSession;
- (void)dealloc;
- (id)micConfiguration;
- (id)micConnectionConfigurations;
- (id)movieFileAudioConnectionConfiguration;
- (void)setAudioSourceNodeShouldCallEndInterruption:(bool)arg1;
- (void)setCameraConfiguration:(id)arg1;
- (void)setClientAuditToken:(id)arg1;
- (void)setClientPID:(id)arg1;
- (void)setClientVersionOfLinkedSDK:(unsigned int)arg1;
- (void)setConfiguresAppAudioSession:(bool)arg1;
- (void)setMicConfiguration:(id)arg1;
- (void)setMicConnectionConfigurations:(id)arg1;
- (void)setMovieFileAudioConnectionConfiguration:(id)arg1;

@end
