#import "ABI12_0_0RCTViewManager.h"
#import <AVFoundation/AVFoundation.h>

@class ABI12_0_0EXBarCodeScanner;

typedef NS_ENUM(NSInteger, ABI12_0_0EXBarCodeScannerType) {
  ABI12_0_0EXBarCodeScannerTypeFront = AVCaptureDevicePositionFront,
  ABI12_0_0EXBarCodeScannerTypeBack = AVCaptureDevicePositionBack
};

typedef NS_ENUM(NSInteger, ABI12_0_0EXBarCodeScannerTorchMode) {
  ABI12_0_0EXBarCodeScannerTorchModeOff = AVCaptureTorchModeOff,
  ABI12_0_0EXBarCodeScannerTorchModeOn = AVCaptureTorchModeOn,
  ABI12_0_0EXBarCodeScannerTorchModeAuto = AVCaptureTorchModeAuto
};

@interface ABI12_0_0EXBarCodeScannerManager
    : ABI12_0_0RCTViewManager <AVCaptureMetadataOutputObjectsDelegate>

@property(nonatomic, strong) dispatch_queue_t sessionQueue;
@property(nonatomic, strong) AVCaptureSession *session;
@property(nonatomic, strong) AVCaptureDeviceInput *videoCaptureDeviceInput;
@property(nonatomic, strong) AVCaptureMetadataOutput *metadataOutput;
@property(nonatomic, strong) id runtimeErrorHandlingObserver;
@property(nonatomic, assign) NSInteger presetCamera;
@property(nonatomic, strong) AVCaptureVideoPreviewLayer *previewLayer;
@property(nonatomic, strong) NSArray *barCodeTypes;
@property(nonatomic, strong) ABI12_0_0EXBarCodeScanner *camera;

- (AVCaptureDevice *)deviceWithMediaType:(NSString *)mediaType
                      preferringPosition:(AVCaptureDevicePosition)position;
- (void)initializeCaptureSessionInput:(NSString *)type;
- (void)startSession;
- (void)stopSession;

@end
