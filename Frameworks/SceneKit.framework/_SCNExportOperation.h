/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface _SCNExportOperation : SCNExportOperation {
    unsigned long long  _antialiasingMode;
    NSDictionary * _attributes;
    bool  _canceled;
    id  _delegate;
    SEL  _didEndSelector;
    double  _endTime;
    NSError * _error;
    NSURL * _outputURL;
    SCNNode * _pointOfView;
    double  _progress;
    SCNRenderer * _renderer;
    SCNScene * _scene;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _startTime;
    bool  _succeded;
    double  _systemTime;
    void * _userInfo;
}

@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic) bool canceled;
@property (nonatomic) id delegate;
@property (nonatomic) SEL didEndSelector;
@property (nonatomic) double endTime;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURL *outputURL;
@property (nonatomic, retain) SCNNode *pointOfView;
@property (nonatomic) double progress;
@property (nonatomic, retain) SCNRenderer *renderer;
@property (nonatomic, retain) SCNScene *scene;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double startTime;
@property (nonatomic) bool succeded;
@property (nonatomic) void*userInfo;

- (unsigned long long)antialiasingMode;
- (id)attributes;
- (void)cancel;
- (bool)canceled;
- (void)dealloc;
- (id)delegate;
- (SEL)didEndSelector;
- (double)endTime;
- (id)error;
- (id)outputURL;
- (id)pointOfView;
- (double)progress;
- (id)renderer;
- (id)scene;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidEndSelector:(SEL)arg1;
- (void)setEndTime:(double)arg1;
- (void)setError:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRenderer:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStartTime:(double)arg1;
- (void)setSucceded:(bool)arg1;
- (void)setUserInfo:(void*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)startTime;
- (bool)succeded;
- (void*)userInfo;

@end
