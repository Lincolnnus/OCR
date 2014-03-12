//
//  ViewController.h
//  OCR
//
//  Created by Shaohuan Li on 11/3/14.
//  Copyright (c) 2014 li.shaohuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TesseractOCR/TesseractOCR.h>

@interface ViewController : UIViewController<TesseractDelegate,UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@end
