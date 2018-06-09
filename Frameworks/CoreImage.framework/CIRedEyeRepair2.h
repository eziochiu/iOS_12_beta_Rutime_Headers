/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRedEyeRepair2 : NSObject {
    struct { 
        bool debug; 
        BOOL base[256]; 
        BOOL face[4]; 
        BOOL eye[2]; 
        BOOL title[4]; 
        BOOL passSpec[12]; 
        BOOL line1[256]; 
        BOOL line2[256]; 
        BOOL line3[256]; 
    }  DCS;
    struct { 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } FR; 
        struct CGPoint { 
            double x; 
            double y; 
        } leftEye; 
        struct CGPoint { 
            double x; 
            double y; 
        } rightEye; 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } LR; 
        struct { 
            int minrow; 
            int maxrow; 
            int mincol; 
            int maxcol; 
        } RR; 
        float IOD; 
        float IODp; 
        float IOAngle; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } Y; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } R; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } A; 
        struct { 
            char *baseAddress; 
            int width; 
            int height; 
            int rowSamples; 
            int rowBytes; 
            int size; 
            int samplesPerPixel; 
            int bytesPerSample; 
            float resolution; 
        } M; 
    }  FC;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  ROIRect;
    float  avgLuminance;
    bool  debugSyntheticPupils;
    int  erError;
    NSArray * faceArray;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  faceBitmap;
    int  faceIndex;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  fullBitmap;
    float  ify;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  inputImageExtent;
    int  ioffx;
    int  ioffy;
    float  maxLuminance;
    float  minLuminance;
    struct { 
        char *baseAddress; 
        int width; 
        int height; 
        int rowSamples; 
        int rowBytes; 
        int size; 
        int samplesPerPixel; 
        int bytesPerSample; 
        float resolution; 
    }  repairMap;
    struct { 
        int minrow; 
        int maxrow; 
        int mincol; 
        int maxcol; 
    }  repairRect;
    float  sharpeningEdgeExtractRadius;
    float  sharpeningEdgeExtractThreshold;
    bool  showSpecularShine;
    struct { 
        int minrow; 
        int maxrow; 
        int mincol; 
        int maxcol; 
    }  subRectangle;
    int  syntheticPupilChannel;
    float  syntheticPupilReach;
    float  syntheticPupilSampling;
    float  syntheticPupilShade;
    float  syntheticPupilSoftness;
    int  syntheticRepairTag;
    NSMutableArray * syntheticRepairs;
    float  syntheticSpecularShineAlpha;
    float  syntheticSpecularShineSoftness;
    float  xf;
    float  xfi;
    float  yf;
    float  yfi;
}

+ (int)adjacencyScoreInBitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg1 atColumn:(int)arg2 row:(int)arg3 radius:(int)arg4;
+ (void)analyzeCoarseGrowBitmaskData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg1 dataSize:(int)arg2 context:(struct { int x1; float x2; float x3; struct { /* ? */ } *x4; int x5; int x6; int x7; struct { int x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; bool x_8_1_6; struct { int x_7_2_1; int x_7_2_2; int x_7_2_3; int x_7_2_4; } x_8_1_7; struct CGPoint { double x_8_2_1; double x_8_2_2; } x_8_1_8; float x_8_1_9; float x_8_1_10; } x8; bool x9; struct { int x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; bool x_10_1_6; struct { int x_7_2_1; int x_7_2_2; int x_7_2_3; int x_7_2_4; } x_10_1_7; struct CGPoint { double x_8_2_1; double x_8_2_2; } x_10_1_8; float x_10_1_9; float x_10_1_10; } x10; int x11; int x12; }*)arg3;
+ (void)analyzeFineGrowBitmaskData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg1 dataSize:(int)arg2 context:(struct { int x1; float x2; float x3; struct { /* ? */ } *x4; int x5; int x6; int x7; struct { int x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; float x_8_1_5; bool x_8_1_6; struct { int x_7_2_1; int x_7_2_2; int x_7_2_3; int x_7_2_4; } x_8_1_7; struct CGPoint { double x_8_2_1; double x_8_2_2; } x_8_1_8; float x_8_1_9; float x_8_1_10; } x8; bool x9; struct { int x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; bool x_10_1_6; struct { int x_7_2_1; int x_7_2_2; int x_7_2_3; int x_7_2_4; } x_10_1_7; struct CGPoint { double x_8_2_1; double x_8_2_2; } x_10_1_8; float x_10_1_9; float x_10_1_10; } x10; int x11; int x12; }*)arg3;
+ (double)averageDifferenceBetweenInsideSummary:(struct { unsigned int x1; unsigned int x2; }*)arg1 andOutsideBorderSummary:(struct { unsigned int x1; unsigned int x2; }*)arg2;
+ (float)bitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg1 debugComments:(struct { bool x1; BOOL x2[256]; BOOL x3[4]; BOOL x4[2]; BOOL x5[4]; BOOL x6[12]; BOOL x7[256]; BOOL x8[256]; BOOL x9[256]; }*)arg2 toOval:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg3;
+ (bool)computeBorderPoints:(struct { char *x1; int x2; int x3; int x4; }*)arg1 rect:(struct { int x1; int x2; int x3; int x4; })arg2 inside:(struct { int x1; struct { int x_2_1_1; int x_2_1_2; } x2[1000]; }*)arg3 outside:(struct { int x1; struct { int x_2_1_1; int x_2_1_2; } x2[1000]; }*)arg4;
+ (int)countOfAdjacentValues:(struct { int x1; int x2; })arg1 in:(struct { char *x1; int x2; int x3; int x4; }*)arg2 ofValue:(int)arg3 atCol:(int)arg4 row:(int)arg5 radius:(int)arg6 addingTo:(int)arg7;
+ (void)createDirectoryAtPath:(id)arg1;
+ (void)deleteAtPath:(id)arg1;
+ (id)directoryContents:(id)arg1;
+ (bool)directoryExistsAtPath:(id)arg1;
+ (void)drawBitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg1 index:(int)arg2 debugComments:(struct { bool x1; BOOL x2[256]; BOOL x3[4]; BOOL x4[2]; BOOL x5[4]; BOOL x6[12]; BOOL x7[256]; BOOL x8[256]; BOOL x9[256]; }*)arg3;
+ (void)drawBitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg1 withOval:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2 index:(int)arg3 comparison:(bool)arg4 salientMode:(int)arg5 debugComments:(struct { bool x1; BOOL x2[256]; BOOL x3[4]; BOOL x4[2]; BOOL x5[4]; BOOL x6[12]; BOOL x7[256]; BOOL x8[256]; BOOL x9[256]; }*)arg6;
+ (struct { struct { int x_1_1_1; int x_1_1_2; int x_1_1_3; int x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; float x6; float x7; float x8; struct { char *x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; int x_9_1_5; int x_9_1_6; int x_9_1_7; int x_9_1_8; float x_9_1_9; } x9; struct { char *x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; int x_10_1_5; int x_10_1_6; int x_10_1_7; int x_10_1_8; float x_10_1_9; } x10; struct { char *x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; int x_11_1_5; int x_11_1_6; int x_11_1_7; int x_11_1_8; float x_11_1_9; } x11; struct { char *x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; int x_12_1_5; int x_12_1_6; int x_12_1_7; int x_12_1_8; float x_12_1_9; } x12; })faceContextWithFaceArray:(id)arg1 index:(int)arg2;
+ (bool)fileExistsAtPath:(id)arg1;
+ (void)graphBitmaskGrowData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg1 size:(int)arg2 index:(int)arg3 debugComments:(struct { bool x1; BOOL x2[256]; BOOL x3[4]; BOOL x4[2]; BOOL x5[4]; BOOL x6[12]; BOOL x7[256]; BOOL x8[256]; BOOL x9[256]; }*)arg4;
+ (id)imageWithREDEYEFORMATBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1;
+ (struct { bool x1; int x2; double x3; int x4; int x5; double x6; int x7; })improveBitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg1 radius:(int)arg2 inChannel:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg3 rect:(struct { int x1; int x2; int x3; int x4; })arg4;
+ (void)initAdjustmentData:(struct { int x1; int x2; int x3; int x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5[100]; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6[100]; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; } x7[100]; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8[100]; }*)arg1;
+ (void)insertIntoProminenceVettingHopper:(struct { int x1; struct { float x_2_1_1; int x_2_1_2; int x_2_1_3; int x_2_1_4; int x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; int x_2_1_9; int x_2_1_10; int x_2_1_11; } x2[4]; }*)arg1 measure:(float)arg2 max:(int)arg3 outside:(int)arg4 confidence:(float)arg5 distance:(float)arg6 area:(int)arg7 borderMax:(int)arg8 borderMin:(int)arg9 row:(int)arg10 column:(int)arg11;
+ (float)intersectRayOrigin:(struct CGPoint { double x1; double x2; })arg1 unitVector:(struct CGPoint { double x1; double x2; })arg2 withEllipseOrigin:(struct CGPoint { double x1; double x2; })arg3 a:(float)arg4 b:(float)arg5 angle:(float)arg6;
+ (struct { int x1; int x2; int x3; int x4; })ovalBoundsWithOC:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;
+ (struct CGPoint { double x1; double x2; })ovalOutlinePointWithT:(float)arg1 OC:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2;
+ (id)pathWithDirectory:(id)arg1 file:(id)arg2;
+ (void)printProminenceSearchResultsWithTitle:(char *)arg1 hopperElement:(struct { float x1; int x2; int x3; int x4; int x5; float x6; float x7; float x8; int x9; int x10; int x11; }*)arg2 maxData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg3 toLine:(char *)arg4 maxLength:(int)arg5;
+ (void)processAdjustmentData:(struct { int x1; int x2; int x3; int x4; struct { float x_5_1_1; float x_5_1_2; float x_5_1_3; } x5[100]; struct { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6[100]; struct { float x_7_1_1; float x_7_1_2; float x_7_1_3; } x7[100]; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8[100]; }*)arg1 intoRadiusChange:(float*)arg2 andShift:(float*)arg3 whichRadius:(int)arg4 radiusValue:(float)arg5 debugComments:(struct { bool x1; BOOL x2[256]; BOOL x3[4]; BOOL x4[2]; BOOL x5[4]; BOOL x6[12]; BOOL x7[256]; BOOL x8[256]; BOOL x9[256]; }*)arg6;
+ (void)renameFile:(id)arg1 toFile:(id)arg2 inDirectory:(id)arg3;
+ (void)summarizeBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 withBitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg2 radius:(int)arg3 rect:(struct { int x1; int x2; int x3; int x4; })arg4 returningInsideSummary:(struct { unsigned int x1; unsigned int x2; }*)arg5 outsideBorderSummary:(struct { unsigned int x1; unsigned int x2; }*)arg6;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

- (void)alignPupils;
- (void)allocateAndPopulateBitmaps;
- (void)autoRepairWithFaceArray:(id)arg1;
- (struct { float x1; float x2; float x3; float x4; })averageColorUnderBitmask:(struct { char *x1; int x2; int x3; int x4; }*)arg1 rect:(struct { int x1; int x2; int x3; int x4; })arg2 eye:(int)arg3 maxRed:(double*)arg4;
- (struct CGPoint { double x1; double x2; })bitmapPointWithDictionaryPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct { int x1; int x2; int x3; int x4; })bitmapRectWithDictionaryRectArray:(id)arg1;
- (struct { int x1; int x2; int x3; int x4; })bitmapRectWithImageSubRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { char *x1; int x2; int x3; int x4; }*)bitmaskWithSharpeningEdgeInRect:(struct { int x1; int x2; int x3; int x4; })arg1;
- (void)characterizePupilAndSpecularShine;
- (bool)computeFilteredPupilBitmapWithRepair:(id)arg1 returningBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 atImageLocation:(struct { int x1; int x2; int x3; int x4; }*)arg3;
- (bool)computeSyntheticPupilBitmapWithRepair:(id)arg1 returningBitmap:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg2 atImageLocation:(struct { int x1; int x2; int x3; int x4; }*)arg3;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })dictionaryPointWithBitmapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dictionaryRectArrayWithBitmapRect:(struct { int x1; int x2; int x3; int x4; })arg1;
- (id)dictionaryRectArrayWithGlobalBitmapRect:(struct { int x1; int x2; int x3; int x4; })arg1;
- (void)doRepairExtraction;
- (void)executeRepair:(id)arg1;
- (float)facePoseYawAngle;
- (bool)findProminenceWithSide:(int)arg1 eyeCase:(int)arg2 returningHopperElement:(struct { float x1; int x2; int x3; int x4; int x5; float x6; float x7; float x8; int x9; int x10; int x11; }*)arg3 maxData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg4 bitmask:(struct { /* ? */ }**)arg5 specialScore:(struct { bool x1; int x2; double x3; int x4; int x5; double x6; int x7; }*)arg6 isSpecular:(bool*)arg7 maxSpecularData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg8 specularBitmask:(struct { /* ? */ }**)arg9;
- (void)freeBitmaps;
- (void)gatherFaceStatistics;
- (struct { int x1; int x2; int x3; int x4; })globalBitmapRectWithDictionaryRectArray:(id)arg1;
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;
- (struct { char *x1; int x2; int x3; int x4; }*)localComputeBitmaskWithChannel:(struct { char *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; float x9; }*)arg1 x:(int)arg2 y:(int)arg3 options:(struct { void *x1; int (*x2)(); }*)arg4 eyeCase:(int)arg5 returningMaxData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg6 isSpecularData:(bool*)arg7 maxSpecularData:(struct { int x1; float x2; float x3; float x4; float x5; bool x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; float x9; float x10; }*)arg8 specularBitmask:(struct { /* ? */ }**)arg9;
- (id)mutableCopyOfArray:(id)arg1;
- (id)packRepairDictionary:(struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10[32]; float x11; int x12; bool x13; struct CGPoint { double x_14_1_1; double x_14_1_2; } x14; float x15; float x16; float x17; float x18; float x19; float x20; int x21; int x22; struct { int x_23_1_1; int x_23_1_2; int x_23_1_3; int x_23_1_4; } x23; int x24; struct { int x_25_1_1; int x_25_1_2; int x_25_1_3; int x_25_1_4; } x25; int x26; int x27; int x28; int x29; int x30; }*)arg1;
- (void)printExecuteRepairError:(int)arg1;
- (float)pupilAspectWithEyeIndex:(int)arg1 andPupilCenter:(struct CGPoint { double x1; double x2; })arg2;
- (float)pupilFractionWithEyeIndex:(int)arg1 andPupilCenter:(struct CGPoint { double x1; double x2; })arg2;
- (id)repairArray;
- (void)repairExternalBuffer;
- (id)repairWithSide:(int)arg1;
- (void)setUpWithOptions:(id)arg1;
- (struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10[32]; float x11; int x12; bool x13; struct CGPoint { double x_14_1_1; double x_14_1_2; } x14; float x15; float x16; float x17; float x18; float x19; float x20; int x21; int x22; struct { int x_23_1_1; int x_23_1_2; int x_23_1_3; int x_23_1_4; } x23; int x24; struct { int x_25_1_1; int x_25_1_2; int x_25_1_3; int x_25_1_4; } x25; int x26; int x27; int x28; int x29; int x30; })unpackRepairDictionary:(id)arg1;
- (void)updateWithFaceIndex:(int)arg1;
- (int)validateRepair:(id)arg1;

@end
