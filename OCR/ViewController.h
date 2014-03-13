//
//  ViewController.h
//  OCR
//
//  Created by Shaohuan Li on 11/3/14.
//  Copyright (c) 2014 li.shaohuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AFHTTPRequestOperationManager.h>
#import <TesseractOCR/TesseractOCR.h>
#import "PageContentViewController.h"

@interface ViewController : UIViewController<TesseractDelegate,UIImagePickerControllerDelegate, UINavigationControllerDelegate,UIPageViewControllerDataSource>
- (IBAction)startWalkthrough:(id)sender;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSMutableArray *pageTitles;
@property (strong, nonatomic) NSMutableArray *pageLinks;

@end
