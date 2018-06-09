/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerAutokeySetupUtil : NSObject {
    id  _actionAPI;
    id  _apiManager;
    PAEKeyerAutokeySetup * _autokeySetup;
    id  _getAPI;
    PAEKeyerHistogram * _keyerHistogram;
    id  _setAPI;
}

- (void)addInitialSample:(struct Vec3f { float x1[3]; }*)arg1;
- (void)clearInitialSamples;
- (void)dealloc;
- (void)delInitialSample:(int)arg1;
- (void)fillAutokeySamplesArray:(struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f {} *x1; struct Vec3f {} *x2; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f {} *x_3_1_1; } x3; }*)arg1;
- (void)getDataFromDB;
- (struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; int x2; int x3; int x4; }*)getHistogram;
- (struct Vec3f { float x1[3]; })getInitialSample:(int)arg1;
- (id)getInitialSamples;
- (int)getSamplesNb;
- (id)initWithAPIManager:(id)arg1;
- (void)setHistogram:(struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; int x2; int x3; int x4; }*)arg1;
- (void)syncWithDB;
- (void)syncWithDBAsDefault;

@end
