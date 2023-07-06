unsigned int binaryToUInt(const char *binary) {
  unsigned int result = 0;

  if (binary == NULL) {
    return 0;
  }
  
  
  for (int i = 0; i < strlen(binary); i++) {
    if (binary[i] != '0' && binary[i] != '1') {
      return 0;
    }
  }
  
  for (int i = strlen(binary) - 1; i >= 0; i--) {
    if (binary[i] == '1') {
      result += 1 << (strlen(binary) - i - 1);
    }
  }

  return result;
}

